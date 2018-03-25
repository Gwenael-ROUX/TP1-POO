#ifndef _PROF_H
#define _PROF_H

#include "Module.h"


class Prof {
public:
    void display()const;
    void addModule(Module module);
    string getName()const;
    void setName(const string name);
private:
    string myName;
    Vector<Module*> dispense;
};

#endif //_PROF_H
