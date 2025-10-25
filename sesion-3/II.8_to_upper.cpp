/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr char TO_LOWER = 'a' - 'A';

int main() {
   char letra_original;

   std::cout << "Introduzca un caracter: ";
   std::cin >> letra_original;

   char letra_convertida = letra_original;

   bool is_uppercase = letra_original >= 'A' && letra_original <= 'Z';

   if (is_uppercase) {
      letra_convertida = letra_original + TO_LOWER;
   }

   std::cout << "El carácter en minuscula es '" << letra_convertida << "'\n";

   return 0;
}