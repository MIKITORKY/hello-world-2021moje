#include "Uzivatel.h"
#include <iostream>

Uzivatel::Uzivatel()
{
    //ctor
}

Uzivatel::Uzivatel(std::string prijmeni_in,std::string jmeno_in, int vek_in, float vaha_in, int vzdelani_in)
{
    prijmeni = prijmeni_in;
    jmeno = jmeno_in;
    vek = vek_in;
    vaha = vaha_in;
    vzdelani = vzdelani_in;
    //dtor
}

string Uzivatel::prijm() const
{
    return prijmeni;
}

string Uzivatel::jme() const
{
    return jmeno;
}

int Uzivatel::ve() const
{
    return vek;
}

float Uzivatel::vah() const
{
    return vaha;
}

int Uzivatel::vzde() const
{
    return vzdelani;
}

