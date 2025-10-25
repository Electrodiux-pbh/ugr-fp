/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

constexpr double EPSILON = 1e-15;

constexpr double MIN = 0;
constexpr double MAX = 3;

int main() {

   // Input

   bool is_input_valid = false;

   double number = 0;

   do {
      std::cout << "Introduzca el número:\n";
      std::cin >> number;

      is_input_valid = number > MIN && number < MAX;

      if (!is_input_valid) {
         std::cout << "El número de iteraciones ha de estar en el rango ";
         std::cout << "(" << MIN << ", " << MAX << ")";
         std::cout << ", intentelo de nuevo.";
      }
   } while (!is_input_valid);

   // Calculations

   double a = number;
   double c = number - 1.0;

   while (std::abs(c) > EPSILON) {
      a = a - a * c / 2.0;
      c = c * c * (c - 3.0) / 4.0;
   }

   std::cout.precision(15);
   std::cout << "Raíz con aproximación " << a << "\n";
   std::cout << "Raíz con std::sqrt " << std::sqrt(number) << "\n";

   return 0;
}