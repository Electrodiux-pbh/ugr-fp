/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

constexpr int ITER_MIN = 1;
constexpr int ITER_MAX = 100 * 1000;

constexpr double PI_CALCULATION_MULTIPLIER = 4.0;

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

   // Calculo de la serie

   /*
   Forma 1: Uso de std::pow

   for (int i = 0; i < iterations; ++i) {
      series_sum += std::pow(-1, i) / (2 * i + 1);
   }
   */

   /*
   Forma 2: Uso de bucles para potencias

   for (int i = 0; i < iterations; ++i) {
      double pow_value = 1.0;

      for (int k = 0; k < i; ++k) {
         pow_value *= -1.0;
      }

      series_sum += pow_value / (2 * i + 1);
   }
   */

   // Forma 3: Condicional (la más optima y menos computacionalmente intensa)

   for (int i = 0; i < iterations; ++i) {
      double factor = 1.0 / (2 * i + 1);

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