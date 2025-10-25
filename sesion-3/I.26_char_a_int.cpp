/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr char DIGIT_PADDING = '0';

int main() {
   char digit_char;

   std::cout << "Introduce un digito del 0-9: ";
   std::cin >> digit_char;

   int digit_val = digit_char - DIGIT_PADDING;

   std::cout << "El digito introducido es el " << digit_val << "\n";

   return 0;
}