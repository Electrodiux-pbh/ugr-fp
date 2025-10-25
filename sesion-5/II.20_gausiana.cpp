/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

constexpr double PI = 3.1416;

int main() {
   double media, desv;
   double min, max, incr;

   // Input
   bool input_is_valid = false;

   // Media
   std::cout << "Introduce la media:\n";
   std::cin >> media;

   // Desviación típica >= 0
   do {
      std::cout << "Introduce la desviación típica:\n";
      std::cin >> desv;

      input_is_valid = desv >= 0;

      if (!input_is_valid) {
         std::cout << "El valor introducido ha de ser mayor o igual a 0, vuelva a intentarlo.\n";
      }
   } while (!input_is_valid);

   // Mínimo
   std::cout << "Introduzca el mínimo:\n";
   std::cin >> min;

   // Máximo
   do {
      std::cout << "Introduce el máximo:\n";
      std::cin >> max;

      input_is_valid = max >= min;

      if (!input_is_valid) {
         std::cout << "El valor máximo es menor que el mínimo, vuelva a intentarlo.\n";
      }
   } while (!input_is_valid);

   // Incremento
   do {
      std::cout << "Introduzca el incremento (> 0):\n";
      std::cin >> incr;

      input_is_valid = incr > 0;

      if (!input_is_valid) {
         std::cout << "El valor incremento ha de ser mayor a 0, vuelva a intentarlo.\n";
      }
   } while (!input_is_valid);

   // Compute values and print them
   for (double x = min; x <= max; x += incr) {
      double exponent = -0.5 * std::pow((x - media) / desv, 2);
      double value = (1.0 / (desv * std::sqrt(2 * PI))) * std::exp(exponent);

      std::cout << "f(" << x << ") = " << value << "\n";
   }

   return 0;
}