/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   unsigned int numero;

   // Entrada
   std::cout << "Introduce un numero entero positivo: ";
   std::cin >> numero;

   int min_bits = std::ceil(std::log2(numero + 1));

   std::cout << "El mínimo de bits para representar el " << numero << " es de "
             << min_bits << " bits\n";

   return 0;
}