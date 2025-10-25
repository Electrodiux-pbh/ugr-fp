/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   double value;
   int cifra;

   std::cout << "Introduzca un número decimal: ";
   std::cin >> value;

   std::cout << "Introduzca la cifra a redondear: ";
   std::cin >> cifra;

   double multiplier = std::pow(10.0, cifra);
   double rounded_value = std::round(value * multiplier) / multiplier;

   std::cout << "El valor de la cifra redondeada es " << rounded_value << "\n";

   return 0;
}