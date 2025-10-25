/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr char TO_LOWER = 'a' - 'A';

int main() {
   char letter;

   std::cout << "Introduzca una letra mayuscula: ";
   std::cin >> letter;

   char lwr_case = letter + TO_LOWER;

   std::cout << "La letra en minuscula es " << lwr_case << "\n";
}