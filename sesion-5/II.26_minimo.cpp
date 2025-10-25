/**
 * @author Pablo Bermejo Hernandez
 */

#include <cstdlib>
#include <iostream>
#include <limits>

#include <cmath>

constexpr int NUMBERS_TO_CHECK = 5;

int main() {

   // Parte 1

   std::cout << "Introduzca " << NUMBERS_TO_CHECK << " números:\n";

   int min_value = std::numeric_limits<int>().max();
   int number;

   for (int i = 0; i < NUMBERS_TO_CHECK; ++i) {
      std::cin >> number;

      if (number < min_value) {
         min_value = number;
      }
   }

   std::cout << "El número más pequeño es " << min_value << "\n";

   // Parte 2

   min_value = std::numeric_limits<int>().max();
   int numbers_count = 0;

   std::cout << "Introduce números, para terminar introduzca el 0:\n";

   do {
      std::cin >> number;

      if (number != 0) {
         numbers_count++;

         if (number < min_value) {
            min_value = number;
         }
      }
   } while (number != 0);

   std::cout << "Numeros introducidos: " << numbers_count << ", número mínimo: " << min_value << "\n";

   // Parte 3

   min_value = std::numeric_limits<int>().max();
   numbers_count = 0;

   do {
      std::cin >> number;

      if (number < 0) {
         numbers_count++;

         if (number < min_value) {
            min_value = number;
         }
      }
   } while (number < 0);

   std::cout << "Numeros introducidos: " << numbers_count << ", número mínimo: " << min_value << "\n";

   return 0;
}