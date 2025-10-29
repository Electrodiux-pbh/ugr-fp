/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int ReadIntGreaterThan(int min) {

   bool is_invalid;
   int number;

   do {

      std::cout << "Introduce a number greater or equal than " << min << ":\n";
      std::cin >> number;

      is_invalid = number < min;

      if (is_invalid) {
         std::cout << "The number is not valid, try again!\n";
      }

   } while (is_invalid);

   return number;
}

int ReadIntInRange(int min, int max) {

   bool is_invalid;
   int number;

   do {

      std::cout << "Introduce a number in range [" << min << ", " << max << "]:\n";
      std::cin >> number;

      is_invalid = number < min || number > max;

      if (is_invalid) {
         std::cout << "The number is not valid, try again!\n";
      }

   } while (is_invalid);

   return number;
}

int main() {

   int min, max;

   std::cin >> min;
   max = ReadIntGreaterThan(min);

   std::cout << "Interval is [" << min << ", " << max << "]\n";

   int number;
   number = ReadIntInRange(min, max);

   std::cout << "Number is " << number << "\n";

   return 0;
}