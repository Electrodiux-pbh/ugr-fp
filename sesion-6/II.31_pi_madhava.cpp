/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

constexpr int ITER_MIN = 1;
constexpr int ITER_MAX = 100 * 1000;

constexpr double PI_CALCULATION_MULTIPLIER = 6.0;

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

   double series_sum = 0;

   const double BASE = 1.0 / std::sqrt(3.0);

   for (int i = 0; i <= iterations; ++i) {
      double pow_value = 1;

      int exp = 2 * i + 1;

      for (int j = 0; j < exp; ++j) {
         pow_value *= BASE;
      }

      double factor = (1.0 * pow_value) / (2.0 * i + 1.0);

      if (i % 2 == 0) {
         series_sum += factor;
      } else {
         series_sum -= factor;
      }
   }

   double pi = series_sum * PI_CALCULATION_MULTIPLIER;

   std::cout.precision(15);
   std::cout << "El valor aproximado de pi es " << pi << "\n";

   return 0;
}