/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {

   /*
   En vez de leer el resultado de este ejercicio lo hice por error.
   Pero lo entrego mi respuesta igualmente.
   */

   bool is_input_valid = false;

   int size;

   do {
      std::cout << "Introduce el tamaño del cuadrado: \n";
      std::cin >> size;

      is_input_valid = size > 0;

      if (!is_input_valid) {
         std::cout << "El tamaño introducido ha de ser mayor a 0, vuelva a intentarlo.\n";
      }
   } while (!is_input_valid);

   for (int i = 1; i <= size; ++i) {
      for (int j = 0; j < size; ++j) {
         std::cout << (i + j) << " ";
      }
      std::cout << "\n";
   }

   return 0;
}