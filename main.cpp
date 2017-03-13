#include <iostream>

#include "module-interface.h"
#include "motor-control.h"
#include "pinout-control.h"
#include "lcd-screen.h"

#include "module-manager.h"

using namespace std;


int main(int argc, char *argv[])
{
    LcdScreen l1;
    MotorControl m1;
    MotorControl m2;
    MotorControl m3;
    LcdScreen l2;

    PinOutCtrl p1;
    PinOutCtrl p2;
    PinOutCtrl p3;

    ModuleManager::Instance().initAll();
}
