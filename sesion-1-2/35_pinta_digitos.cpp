/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   int numero;

   // Entrada
   std::cout << "Introduce un entero de 5 digitos: ";
   std::cin >> numero;

   int dig_1 = numero / 10000;
   numero %= 10000;
   int dig_2 = numero / 1000;
   numero %= 1000;
   int dig_3 = numero / 100;
   numero %= 100;
   int dig_4 = numero / 10;
   int dig_5 = numero % 10;

   // Salida
   std::cout << "El numero es " << dig_1 << " " << dig_2 << " " << dig_3 << " "
             << dig_4 << " " << dig_5 << "\n";

   return 0;
}