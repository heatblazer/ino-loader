#ifndef MODULEINTERFACE_H
#define MODULEINTERFACE_H

struct module_interface_t
{
    void (*setup)(void); // universal setup for the iface
    void (*doLoop)(void); // the loop
    module_interface_t* next;
    void* data; // universal data to the current class see usage in the motor
};


class ModuleList
{
    module_interface_t* head, *tail;
    void clear(); // called on dtor
public:
    ModuleList();
    ~ModuleList();
    void put(module_interface_t* iface);
    void initAll(); // your important function!
    void loopAll(); // your loop all function
    const module_interface_t* first();
    const module_interface_t* last();
};


#endif // MODULEINTERFACE_H
