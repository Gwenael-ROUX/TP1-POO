#include "Module.h"

Module::Module(vector <Prof*> & enseignéPar) :myName(nomModule_){
}

void Module::display() const {
    for (Prof * prof : enseignéPar)
    {
        cout << myName << " est ensigné par : "<< myName <<endl;
    }
}

void Module::addProf(Prof prof) {
    enseignéPar.push_back(prof);
}

string Module::getName() const {
    return myName;
}

void Module::setName(const string name) {
    myName = name;
}
