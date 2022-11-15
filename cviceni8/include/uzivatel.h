
#ifndef UZIVATEL_H
#define UZIVATEL_H
#include <iostream>

#include <vector>

using namespace std;

class Uzivatel

{
    public:
        Uzivatel();
        Uzivatel(string prijmeni_in, string jmeno_in, int vek_in, string vzdelani_in);
        string prijm() const;
        string jme() const;
        int ve() const;
        string vzde() const;

    protected:

    private:
        string prijmeni, jmeno, vzdelani;
        int vek;

};

#endif // UZIVATEL_H
