/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   double initial_value, final_value;

   std::cout << "Este programa calcula la variación porcentual de dos números.\n";
   std::cout << "Si introduce un número negativo en el valor inicial, el programa terminará.\n\n";

   bool should_exit = false;

   while (!should_exit) {
      // Input
      std::cout << "Introduzca el valor inicial: ";
      std::cin >> initial_value;

      should_exit = initial_value < 0;

      if (!should_exit) {
         std::cout << "Introduzca el valor final: ";
         std::cin >> final_value;

         // Output
         double vp = std::abs(100.0 * ((final_value - initial_value) / initial_value));
         std::cout << "La variación porcentual es del " << vp << "%\n\n";
      }
   }

   std::cout << "\nFinalizando el programa\n";

   return 0;
}