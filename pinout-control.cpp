#include "pinout-control.h"
#include <iostream>



module_interface_t * const PinOutCtrl::getInterface()
{
    return &this_interface;
}

PinOutCtrl::PinOutCtrl()
    : this_interface({0, 0, 0})
{
    this_interface.setup = PinOutCtrl::setup;
    this_interface.doLoop = PinOutCtrl::doLoop;
    this_interface.data = this;
    this_interface.next = nullptr;

    mod_manager = &ModuleManager::Instance();

    mod_manager->addModule(&this_interface);
}

PinOutCtrl::~PinOutCtrl()
{
}

void PinOutCtrl::setup()
{
    std::cout << "PinOutControl setup...\n";
}

void PinOutCtrl::doLoop()
{
    std::cout << "PinOutControl loop...\n";
}
