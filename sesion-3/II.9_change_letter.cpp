/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr char TO_LOWER = 'a' - 'A';
constexpr char TO_UPPER = 'A' - 'a';

int main() {
   char letra_original;

   std::cout << "Introduzca un caracter: ";
   std::cin >> letra_original;

   char letra_convertida = letra_original;

   bool is_uppercase = letra_original >= 'A' && letra_original <= 'Z';
   bool is_lowercase = letra_original >= 'a' && letra_original <= 'z';

   if (is_uppercase) {
      letra_convertida = letra_original + TO_LOWER;
      std::cout << "El carácter es mayúscula\n";
   } else if (is_lowercase) {
      letra_convertida = letra_original + TO_UPPER;
      std::cout << "El carácter es minúscula\n";
   } else {
      std::cout << "El carácter es un símbolo\n";
   }

   std::cout << "El carácter en transformado es '" << letra_convertida << "'\n";

   return 0;
}