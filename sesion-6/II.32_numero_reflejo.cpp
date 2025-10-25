/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr int NUMBER_BASE = 10;

int main() {
   int number;

   bool is_input_valid = false;

   do {
      std::cout << "Introduce un número: ";
      std::cin >> number;

      is_input_valid = number >= 0;

      if (!is_input_valid) {
         std::cout << "El número ha de ser mayor o igual a 0, vuelva a intentarlo.";
      }
   } while (!is_input_valid);

   std::cout << "El numero espejo es ";

   for (int i = number; i > 0; i /= NUMBER_BASE) {
      int digit = i % NUMBER_BASE;
      std::cout << digit;
   }

   std::cout << "\n";

   return 0;
}