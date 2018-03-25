#include <iostream>
#include "Prof.h"
#include "Module.h"

using namespace std;

void testModuleProf()
    {
        vector <Module *> vectModules;
        vector <Prof *> vectProfs;

        // Création d'un vecteur de modules
        for (unsigned i = 0; i < 5; i++)
        {
            string nomModule;

            cout << "Entrez nom du module " << i+1 << " : ";
            getline(cin, nomModule);
            cout << endl;

            Module *unModule = new Module (nomModule);
            vectModules.push_back(unModule);
        }

        // Création d'un vecteur de profs
        for (unsigned i = 0; i < 5; i++)
        {
            string nomProf;

            cout << "Entrez nom du prof " << i+1 << " : ";
            getline(cin, nomProf);
            cout << endl;

            Prof *unProf = new Prof (nomProf);
            vectProfs.push_back(unProf);
        }

        // Création de 2 modules
        Module *Test1Module = new Module ("ModuleDeTest1");
        Module *Test2Module = new Module("ModuleDeTest2");

        // Ajout de ces modules à tous les profs
        for (Prof *prof : vectProfs)
        {
            prof->addModule(Test1Module);
            prof->addModule(Test2Module);
        }

        // Création de 2 profs
        Prof *Test1Prof = new Prof ("ProfDeTest1");
        Prof *Test2Prof = new Prof ("ProfDeTest2");

        // Ajout de ces profs à tous les modules
        for (Module *module : vectModules)
        {
            module->addProf(Test1Prof);
            module->addProf(Test2Prof);
        }

        // Affichage des profs et leurs modules
        for (Prof *prof : vectProfs)
        {
            prof->display();

            for (Module *module : prof->myModules)
                cout << "   - " << module->getName() << endl;
        }

        // Affichage des modules et leurs profs
        for (Module *module : vectModules)
        {
            module->display();

            for (Prof *prof : module->myProfs)
                cout << "   - " << prof->getName() << endl;
        }

        delete vectModules;
        delete vectProfs;
    }

int main()
{

    return 0;
}
