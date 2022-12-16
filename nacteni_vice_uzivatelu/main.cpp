#include <iostream>
#include <fstream>
#include <vector>
#include "Uzivatel.h"
#include <algorithm>

using namespace std;

vector<Uzivatel> nacti(vector<Uzivatel> uzivatele)
{
cout << "Zadej jmeno: ";
    string jmeno;
    cin >> jmeno;
    cout << "Jmeno je " << jmeno << "\n";

cout << "Zadej prijmeni: ";
    string prijmeni;
    cin >> prijmeni;
    cout << "Prijmeni je " << prijmeni << "\n";

cout << "Zadej vek: ";
    int vek;
    cin >> vek;

    do
    {
        if(vek<0)
        {
            cout << "No to nevim.\n";
            cout << "Nelzi a zkus to znovu: ";
            cin >> vek;
        }
        else if (vek>130)
        {
            cout << "To už se z tebe práší ne?\n";
            cout << "Nelzi a zkus to znovu: ";
            cin >> vek;
        }
        else
        {
            cout << "Vas vek je " << vek << "\n";
        }
    }while(vek>130||vek<0);

cout << "Zadej váhu v kg: ";
    float vaha;
    cin >> vaha;

    do{
        if(vaha < 40)
        {
            cout << "Ha, prcku!\n";
            cout << "Nelzi a zkus to znovu: ";
            cin >> vaha;
        }
        else if (vaha>160)
        {
            cout << "Tomu ani ty sam neveris.\n";
            cout << "Nelzi a zkus to znovu: ";
            cin >> vaha;
        }
        else
        {
            cout << "Vase vaha je: " << vaha << "\n";
        }
    }while(vaha > 160||vaha<40);

cout << "Zadejte nejvyssi dosazene vzdelani (zs=0, ss=1, vs=2): ";
    int vzdelani;
    cin >> vzdelani;

    do
    {
        if(vzdelani == 0)
        {
            cout << "Vase vzdelani je zakladni.\n";
        }
        else if (vzdelani == 1)
        {
            cout << "Vase vzdelani je stredoskolske.\n";
        }
        else if (vzdelani == 2)
        {
            cout << "Vase vzdelani je vysokoskolske.\n";
        }
        else
        {

            cout << "Vyber si z tech moznosti a zkus to znovu: ";
            cin >> vzdelani;
        }
    }while(vzdelani>2||vzdelani<0);

    uzivatele.push_back(Uzivatel(prijmeni,jmeno,vek,vaha,vzdelani));

    return uzivatele;

}

void ukladani(vector<Uzivatel> uzivatele)
{
    ofstream ulozTo ("users.txt");

    for(Uzivatel k : uzivatele)
    {
        ulozTo << k.prijm();
        ulozTo << " ";
        ulozTo << k.jme();
        ulozTo << " ";
        ulozTo << k.ve();
        ulozTo << " ";
        ulozTo << k.vah();
        ulozTo << " ";
        ulozTo << k.vzde();
        ulozTo << "\n";
    }
    return;
}

struct Trideni
{
    bool operator()(class Uzivatel& a1 , class Uzivatel& a2) const
    {
        return a1.prijm() < a2.prijm();
    }

};

vector<Uzivatel> serazeno(vector<Uzivatel> a)
{
    sort(a.begin(),a.end(), Trideni());
    return a;
}

int main()
{
    int u;
    vector<Uzivatel> uzivatele;

    do
    {
        u = 0;
        uzivatele = nacti(uzivatele);
        cout << "Pokud chcete nacist dalsiho uzivatele napiste 1: ";
        cin >> u;
    }while(u==1);

    vector<Uzivatel> uzivatele2;
    uzivatele2 = serazeno(uzivatele);

    ukladani(uzivatele2);

return 0;
}
