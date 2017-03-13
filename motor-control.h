#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H
//#include "module-interface.h"
#include "module-manager.h"

class MotorControl
{
     module_interface_t this_interface;
     ModuleManager* mod_manager;
public:
    // this must be provided to all .hpp file, .cpp files
    // as a static function
    module_interface_t* const  getInterface();

    MotorControl();
    ~MotorControl();
    // names may not be the same as the interface byt the prototpyes must be
    // ex. iface setup is void setup(void)
    // so here must be t he same, it cant be int setup(void), or void setup(char[]);
    // same for doLoop()
    static void setup(); // must be static
    static  void doLoop(); // must be static
};

#endif // MOTORCONTROL_H
