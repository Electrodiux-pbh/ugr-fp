/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

constexpr int NUMBER_BASE = 10;

int main() {
   int number;
   bool is_input_valid = false;

   // Input

   do {
      std::cout << "Introduce un número:\n";
      std::cin >> number;

      is_input_valid = number >= 0;

      if (!is_input_valid) {
         std::cout << "El número ha de ser positivo, intentalo de nuevo.\n";
      }
   } while (!is_input_valid);

   // Calculate the number of digits
   int number_of_digits = 0;

   for (int i = number; i > 0; i /= NUMBER_BASE) {
      number_of_digits++;
   }

   // Calculate the sum

   int total_sum = 0;

   for (int i = number; i > 0; i /= NUMBER_BASE) {
      int digit = i % NUMBER_BASE;
      total_sum += std::pow(digit, number_of_digits);
   }

   if (total_sum == number) {
      std::cout << "El número es narcisista\n";
   } else {
      std::cout << "El número no es narcisista\n";
   }

   return 0;
}