#ifndef UZIVATEL_H
#define UZIVATEL_H
#include <iostream>

#include <vector>

using namespace std;

class Uzivatel

{
    public:
        Uzivatel();
        Uzivatel(string prijmeni_in, string jmeno_in, int vek_in, float vaha_in, int vzdelani_in);
        string prijm() const;
        string jme() const;
        int ve() const;
        float vah() const;
        int vzde() const;

    protected:

    private:
        string prijmeni, jmeno;
        int vek, vzdelani;
        float vaha;
};

#endif // UZIVATEL_H
