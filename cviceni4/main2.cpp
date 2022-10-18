#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

    vector <int> nacti(string data)
    {
    ifstream soubor(data);

    vector <int> vektor;

    int cislo = 0;
    soubor >> cislo;


    while(!soubor.eof())
        {
        vektor.push_back(cislo);
        soubor >> cislo;
        }
        return vektor;
    }

int main()
{

    vector <int> vektor = nacti("data.txt");
    cout << "Nacteno " << vektor.size() << " cisel" << endl;
    vector <int> serazeno (vektor.size(),0);

    int krok = 0;

    for (int p=0; p < vektor.size(); ++p)
    {
        int misto=0;
        for (int q=0; q < vektor.size(); ++q)
            {
                if (vektor[p] > vektor[q])
                {
                    misto=misto+1;
                }
            }
        serazeno[misto]=vektor[p];

    krok++;
    }

    for (int r=0; r < vektor.size(); ++r)
    {
        if (serazeno[r+1]==0)
        {
            serazeno[r+1]=serazeno[r];
        }
    }

    for (int x : serazeno)
    {
    cout << x << std::endl;
    }
    cout << "pocet kroku: " << krok << endl;

    ofstream outFile("10000.txt");
    // the important part
    for (const auto &e : serazeno) outFile << e << endl;

    return 0;
}

