#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include "Uzivatel.h"
#include <algorithm>

using namespace std;
int main () {



vector<Uzivatel> nacti(vector<Uzivatel> uzivatele)
{

//int main () {

 /*std::cout <<"Chcete zadat dalsi osobu?" << std::endl;
 std::string pokracovat;
    std::cin >> pokracovat;

pokracovat == "ano";
*/

std::string pokracovat;
do
{

	std::cout <<"Jake je vase jmeno?" << std::endl;
	std::string jmeno;
	std::string prijmeni;
	std::cin >> jmeno;
	std::cout <<"Jake je vase prijmeni?" << std::endl;
    std::cin >> prijmeni;

	int vek;

        while (1) {
        std::cout <<"Kolik vam je let?" << std::endl;

        std::cin >> vek;
            if (vek < 18) {
            std::cout <<"Jsi moc mladej" << std::endl;



}
            else if (vek > 70) {
            std::cout <<"Jsi moc starej" << std::endl;

}

            else {
            std::cout << "jdeme dal"<< std::endl;
                break;
   }
   }
        std::cout <<"Vek:" << vek<< std::endl;

        std::string vzdelani;

        while(1)
    {
            std::cout << "Zadejte nejvyssi dosazene vzdelani (ss, vs): ";
            std::cin >> vzdelani;
            if (vzdelani == "ss")
        {
                break;
        }
            else if (vzdelani == "vs")
        {
                break;
}
    std::cout << "Zadejte spravne vzdelani" << std::endl;
}
    std::cout <<"Jmeno: " << jmeno << std::endl;
    std::cout <<"Prijmeni: " << prijmeni << std::endl;
    std::cout <<"Vek: " << vek << std::endl;
    std::cout <<"Vzdelani: " << vzdelani << std::endl;



    std::cout <<"Chcete zadat dalsi osobu?" << std::endl;
    std::cin >> pokracovat;

    uzivatele.push_back(Uzivatel(prijmeni,jmeno,vek,vzdelani));
}
while (pokracovat == "ano");

//uzivatele.push_back(Uzivatel(prijmeni,jmeno,vek,vzdelani));

    return uzivatele;

   // return 0;
}
//}




}
