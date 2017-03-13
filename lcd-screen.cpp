#include "lcd-screen.h"
#include <iostream>



module_interface_t * const LcdScreen::getInterface()
{
    return &this_interface;
}

LcdScreen::LcdScreen()
{
    mod_manager = &ModuleManager::Instance();
    this_interface.setup = LcdScreen::setup;
    this_interface.doLoop = LcdScreen::doLoop;
    this_interface.data = this;
    this_interface.next = nullptr;

    mod_manager->addModule(&this_interface);
}

LcdScreen::~LcdScreen()
{
}

void LcdScreen::setup()
{
    std::cout << "LcdScreen setup...\n";
}

void LcdScreen::doLoop()
{
    std::cout << "LcdScreen  loop...\n";
}
