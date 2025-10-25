/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr int ITER_MIN = 1;
constexpr int ITER_MAX = 100 * 1000;

constexpr double PI_CALCULATION_MULTIPLIER = 2.0;

int main() {

   int iterations = 0;
   bool is_input_valid = false;

   do {
      std::cout << "Introduzca el número de iteraciones de la suma:\n";
      std::cin >> iterations;

      is_input_valid = iterations >= ITER_MIN && iterations <= ITER_MAX;

      if (!is_input_valid) {
         std::cout << "El número de iteraciones ha de estar en el rango ";
         std::cout << "[" << ITER_MIN << ", " << ITER_MAX << "]";
         std::cout << ", intentelo de nuevo.";
      }
   } while (!is_input_valid);

   double series_value = 1;

   double numerator = 2;
   double denominator = 1;

   bool incr_numerator = false;

   for (int i = 0; i < iterations; ++i) {
      series_value *= numerator / denominator;

      if (incr_numerator) {
         numerator += 2;
      } else {
         denominator += 2;
      }

      incr_numerator = !incr_numerator;
   }

   /*
   Forma 2

   double numerator = 2;
   double denominator = 1;

   for (int i = 0; i < iteraciones; ++i) {
      series_value *= numerator / denominator;

      double next_numerator = denominator + 1;
      denominator = numerator + 1;
      numerator = next_numerator;
   }
   */

   double pi = series_value * PI_CALCULATION_MULTIPLIER;

   std::cout.precision(15);
   std::cout << "El valor aproximado de pi es " << pi << "\n";

   return 0;
}