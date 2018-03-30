#include <iostream>
#include <iomanip>
#include "Duree.h"

using namespace std;
using namespace nsUtil;

void testDuree()
{
    Duree D (1000000);
    D.display();
    Duree D2;
    D2.display();
}
