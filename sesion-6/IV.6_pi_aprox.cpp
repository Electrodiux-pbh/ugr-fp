/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

double PiMadhava(int iterations) {
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

   return series_sum * 6.0;
}

double PiMadhava() {
   double series_sum = 0;

   const double BASE = 1.0 / std::sqrt(3.0);
   constexpr int ITERATIONS = 1000;

   for (int i = 0; i <= ITERATIONS; ++i) {
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

   return series_sum * 6.0;
}

int readIterations() {

   bool is_input_valid;
   int iterations;

   do {
      std::cout << "Introduzca el número de iteraciones:\n";
      std::cin >> iterations;

      is_input_valid = iterations > 0;

      if (!is_input_valid) {
         std::cout << "Las iteraciones han de ser mayores a 0, vuelva a intentarlo.\n";
      }
   } while (!is_input_valid);

   return iterations;
}

int main() {

   int iterations = readIterations();
   const double PI = PiMadhava(iterations);

   /*
   Por lo que entiendo del enunciado, se pregunta si considero que el número de iteraciones
   se ha de leer dentro de la función PiMadhava. En tal caso afirmo que PiMadhava no ha de leer
   el número de iteraciones, ya que estas se debe pasar como argumento para no mezclar la parte
   de IO con los computos, además, en caso de cambiar la forma en la que se hace el input o si
   se necesitara calcular el valor de esa función con otro valor (sin pedirlo por la consola), no
   se podría hacer, obligando a repetir código.
   */

   std::cout << "El valor de PI con " << iterations << " iteraciones es de " << PI << "\n";

   return 0;
}