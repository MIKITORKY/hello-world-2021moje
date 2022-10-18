#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
vector <int> nacti(std::string data)
    {
    std::ifstream soubor(data);

    std::vector <int> vektor;

    int cislo = 0;
    soubor >> cislo;

    while(!soubor.eof())
        {
        vektor.push_back(cislo);
        soubor >> cislo;
        }
        return vektor;
}
int main ()
{
    std::vector <int> muj_vektor = nacti("data.txt");
    std::cout << "Nacteno " << muj_vektor.size() << " cisel" << std::endl;
    std::vector <int> setrizeno (muj_vektor.size(),0);

   int i, j,temp,pass=0;

   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
    //cout <<muj_vektor<<"\n";
   }
    cout<<endl;
    for(i = 0; i<muj_vektor.size(); i++) {
        for(j = i+1; j<10; j++)
   {
        if(muj_vektor[j] < muj_vektor[i]) {
         temp = muj_vektor[i];
         muj_vektor[i] = muj_vektor[j];
         muj_vektor[j] = temp;
      }
   }
    pass++;
    }
    cout <<"Sorted Element List ...\n";
    for(i = 0; i<muj_vektor.size(); i++) {
   //cout <<muj_vektor<<"\t";
    }
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
