#include <iostream>
#include <vector>
#include <forward_list>
#include <list>
#include <set>

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

int main() {

    vector <int> vektor = nacti("data.txt");

    std::set<int> a = {vektor};

    //a.insert(15);

    //std::cout << a.count(1) << std::endl;

    //if (a.find(10) == a.end ()) std::cout << "hodnota neni v mnozine" << std::endl;

    for(std::set<int>::iterator it = a.begin(); it != a.end(); it++) {
       //std::list<int>::iterator it2 = it

        //if (*it > 2 && *it < 4) a.insert(std::next(it,2), 4);

    }
/*
    std::cout << *it << "\n";
*/
    for (int prvek : vektor) {
    std::cout <<prvek << std::endl;
    }

return 0;
}
