#include <iostream>
#include <iomanip>
#include "Duree.h"

using namespace nsUtil;
using namespace std;

unsigned long long Duree::getDuree() const noexcept
{
    return myDuree;
}

void Duree::Normaliser() noexcept
{
    myDays = myDuree / (60*60*24);
    myHours = (myDuree - myDays *60*60*24) / (60*60);
    myMinutes = (myDuree - myDays * 60*60*24 - myHours * 60*60) / (60);
    mySeconds = myDuree % 60;
}

Duree::Duree(const unsigned & myDuree_) noexcept:
    myDuree (myDuree_){
    Normaliser();
}

void Duree::display() const
{
    //0 jour(s)  0 heure(s)  1 minute(s) 40 seconde(s)
    cout << setw(4) << myDays << " jour(s) "
         << setw(4) << myHours << " heure(s) "
         << setw(4) << myMinutes << " minute(s) "
         << setw(4) << mySeconds << " seconde(s) "
         << endl;
}

void Duree::inc(const unsigned long long & delta) noexcept
{
    myDuree += delta; // myDuree = myDuree + delta
    Normaliser();
}

void Duree::dec(const unsigned long long & delta) noexcept
{
    if (delta > myDuree) return;
    myDuree -= delta;
    Normaliser();
}
