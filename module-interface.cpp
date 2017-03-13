#include "module-interface.h"


void ModuleList::clear()
{
    while (head) {
        module_interface_t* del = head;
        head = head->next;
        //delete del; // or C`s free ...
    }
}

ModuleList::ModuleList()
    : head(nullptr), tail(nullptr)
{
}

ModuleList::~ModuleList()
{
    clear();
}

void ModuleList::put(module_interface_t *iface)
{
    if (head == nullptr) {
        iface->next = head;
        head = tail  = iface;
    } else {
        tail->next = iface;
        tail = iface;
    }
}

void ModuleList::initAll()
{
    module_interface_t* it = head;
    while (it) {
        it->setup();
        it = it->next;
    }
}

void ModuleList::loopAll()
{
    module_interface_t* it = head;
    while (it) {
        it->doLoop();
        it = it->next;
    }
}

const module_interface_t *ModuleList::first()
{
    return head;
}

const module_interface_t *ModuleList::last()
{
    return tail;
}
