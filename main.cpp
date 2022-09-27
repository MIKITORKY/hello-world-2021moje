#include <iostream>
#include <cmath>

int main () {
	std::cout <<"Jak se jmenujete?" << std::endl;
	std::string jmeno;
	std::cin >> jmeno;


	std::cout <<"Kolik vam je let?" << std::endl;
	int cele_cislo;
    std::cin >> cele_cislo;

    if (cele_cislo < 18) {
        std::cout <<"Jsi moc mladej" << std::endl;

}
	else if (cele_cislo > 70) {
        std::cout <<"Jsi moc starej" << std::endl;
}
    else {
    std::cout <<"Vek:" << std::endl;

}
    std::cout <<"Jmeno:" << jmeno << std::endl;
    std::cout <<"Vek:" << cele_cislo << std::endl;
return 0;
}
