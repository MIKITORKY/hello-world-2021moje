#include <iostream>
#include <cmath>

int main () {

 /*std::cout <<"Chcete zadat dalsi osobu?" << std::endl;
 std::string pokracovat;
    std::cin >> pokracovat;

pokracovat == "ano";
*/
std::string pokracovat;
do
{

	std::cout <<"Jak se jmenujete?" << std::endl;
	std::string jmeno;
	std::string prijmeni;
	std::cin >> jmeno;
    std::cin >> prijmeni;

	int cele_cislo;

        while (1) {
        std::cout <<"Kolik vam je let?" << std::endl;

        std::cin >> cele_cislo;
            if (cele_cislo < 18) {
            std::cout <<"Jsi moc mladej" << std::endl;



}
            else if (cele_cislo > 70) {
            std::cout <<"Jsi moc starej" << std::endl;

}

            else {
            std::cout << "jdeme dal"<< std::endl;
                break;
   }
   }
        std::cout <<"Vek:" << cele_cislo << std::endl;

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
    std::cout <<"Vek: " << cele_cislo << std::endl;
    std::cout <<"Vzdelani: " << vzdelani << std::endl;



    std::cout <<"Chcete zadat dalsi osobu?" << std::endl;
    std::cin >> pokracovat;
}
while (pokracovat == "ano");


    return 0;
}




