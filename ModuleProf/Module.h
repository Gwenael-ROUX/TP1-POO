#ifndef _MODULE_H
#define _MODULE_H

#include "Prof.h"


class Module {
public:
    void display() const;
    void addProf(Prof prof);
    string getName() const;
    void setName(const string name);
private:
    string myName;
    Vector<Prof*> enseignéPar;
};

#endif //_MODULE_H
