/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

constexpr int NUMBER_BASE = 10;

int calculateNumberOfDigits(int number, int base) {
   // Make sure the number is always positive
   number = std::abs(number);

   int number_of_digits = 0;

   for (int i = number; i > 0; i /= base) {
      number_of_digits++;
   }

   return number_of_digits;
}

bool isNarcisist(int number, int base) {
   int digit_count = calculateNumberOfDigits(number, base);

   int sum = 0;

   for (int i = number; i > 0; i /= base) {
      int digit = i % base;
      sum += std::pow(digit, digit_count);
   }

   return sum == number;
}

int readNumber() {
   bool is_input_valid = false;

   int number;

   do {
      std::cout << "Introduce un número:\n";
      std::cin >> number;

      is_input_valid = number >= 0;

      if (!is_input_valid) {
         std::cout << "El número ha de ser positivo, intentalo de nuevo.\n";
      }
   } while (!is_input_valid);

   return number;
}

int main() {
   int number = readNumber();

   if (isNarcisist(number, NUMBER_BASE)) {
      std::cout << "El número es narcisista\n";
   } else {
      std::cout << "El número no es narcisista\n";
   }

   return 0;
}