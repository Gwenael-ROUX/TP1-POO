#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

namespace nsUtil
{
    class Duree
    {
    private:
        unsigned long long myDuree;
        unsigned long long mySeconds;
        unsigned long long myMinutes;
        unsigned long long myHours;
        unsigned long long myDays;
        void Normaliser ()noexcept;
    public:
        Duree (const unsigned & d = 0) noexcept;
        void display ()const;
        void inc (const unsigned long long & delta) noexcept;
        void dec (const unsigned long long & delta) noexcept;
        unsigned long long getDuree() const noexcept;
    };//Duree
}


#endif // DUREE_H_INCLUDED
