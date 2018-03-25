#include "Module.h"

Module::Module(vector <Prof*> & enseign�Par) :myName(nomModule_){
}

void Module::display() const {
    for (Prof * prof : enseign�Par)
    {
        cout << myName << " est ensign� par : "<< myName <<endl;
    }
}

void Module::addProf(Prof prof) {
    enseign�Par.push_back(prof);
}

string Module::getName() const {
    return myName;
}

void Module::setName(const string name) {
    myName = name;
}
