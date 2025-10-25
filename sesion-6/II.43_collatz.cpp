/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   int min, max;

   bool is_input_valid = false;

   // Input

   do {
      std::cout << "Ingrese el mínimo: \n";
      std::cin >> min;

      is_input_valid = min > 0;

      if (!is_input_valid) {
         std::cout << "El mínimo debe ser mayor que 0. Inténtelo de nuevo.\n";
      }
   } while (!is_input_valid);

   do {
      std::cout << "Ingrese el máximo: \n";
      std::cin >> max;

      is_input_valid = max >= min;

      if (!is_input_valid) {
         std::cout << "El máximo debe ser mayor o igual que el mínimo (" << min << "). Inténtelo de nuevo.\n";
      }
   } while (!is_input_valid);

   // Compute

   int max_orbit = 0;
   int number_max_orbit = 0;

   for (int i = min; i <= max; ++i) {

      int number = i;
      int orbit = 0;

      while (number != 1) {

         if (number % 2 == 0) {
            number /= 2;
         } else {
            number = number * 3 + 1;
         }

         orbit++;
      }

      if (orbit > max_orbit) {
         max_orbit = orbit;
         number_max_orbit = i;
      }
   }

   std::cout << "El número con máx orbita en el itervalo ";
   std::cout << "[" << min << ", " << max << "]";
   std::cout << " es el " << number_max_orbit << " con una orbita de " << max_orbit << "\n";

   return 0;
}