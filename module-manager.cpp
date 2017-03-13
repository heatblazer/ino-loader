#include "module-manager.h"



ModuleManager* ModuleManager::s_inst = nullptr;

ModuleManager::ModuleManager()
{

}

ModuleManager::~ModuleManager()
{

}

ModuleManager &ModuleManager::Instance()
{
    if (!s_inst) {
        s_inst = new ModuleManager;
    }

    return *s_inst;
}

void ModuleManager::addModule(module_interface_t *iface)
{
    modules.put(iface);
}

void ModuleManager::initAll()
{
    const module_interface_t* it = modules.first();
    while(it) {
        it->setup();
        it = it->next;
    }

}

