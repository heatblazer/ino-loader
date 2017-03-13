#include "motor-control.h"
#include <iostream>


module_interface_t * const MotorControl::getInterface()
{
    return &this_interface;
}

MotorControl::MotorControl()
    : this_interface({0, 0, 0})
{
    this_interface.setup = &MotorControl::setup;
    this_interface.doLoop = &MotorControl::doLoop;
    this_interface.data = this;
    this_interface.next = nullptr;

    mod_manager = &ModuleManager::Instance();
    mod_manager->addModule(&this_interface);

}

MotorControl::~MotorControl()
{
}

void MotorControl::setup()
{
    std::cout << "MotorControl  setup...\n";
}

void MotorControl::doLoop()
{
    std::cout << "MotorControl  loop...\n";
}

