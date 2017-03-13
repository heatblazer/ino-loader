#ifndef MODULEMANAGER_H
#define MODULEMANAGER_H

#include "module-interface.h"

/// Don`t look over here yet!!!
/// \brief The ModuleManager class
///
class ModuleManager
{
    static ModuleManager* s_inst;
    ModuleManager();
    ~ModuleManager();
    ModuleList modules;

public:
    static ModuleManager& Instance();
    void addModule(module_interface_t* iface);
    void initAll();
};


#endif // MODULEMANAGER_H
