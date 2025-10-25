/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   char caracter;

   std::cout << "Introduce un carácter en mayúscula: ";
   std::cin >> caracter;

   std::cout << "El orden del caracter es " << (caracter - 'A') << "\n";

   return 0;
}