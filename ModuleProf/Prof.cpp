#include "Prof.h"

Prof::Prof(vector <Module*> & dispense) :myName(nomProf_){
}

void Prof::display() const {
    for (Module * module : dispense )
    {
        cout << myName << " enseigne le module : "<< myName <<endl;
    }
}

void Prof::addModule(Module module) {
    dispense.push_back(module);
}

string Prof::getName() const {
    return myName;
}

void Prof::setName(const string name) {
    myName = name;
}
