/**
 * @author Pablo Bermejo Hernández
 */

#include <iostream>

enum class CharacterType {
   UPPER_CASE,
   LOWER_CASE,
   SYMBOL,
};

constexpr char TO_UPPER = 'A' - 'a';
constexpr char TO_LOWER = 'a' - 'A';

int main() {

   /*
   Este código se puede simplificar mucho, pero como se pide separar el input,
   el output y los computos, hay redundancias.
   */

   // Input

   char character;

   std::cout << "Introduzca un carácter: ";
   std::cin >> character;

   CharacterType char_type;

   if (character >= 'a' && character <= 'z') {
      char_type = CharacterType::LOWER_CASE;
   } else if (character >= 'A' && character <= 'Z') {
      char_type = CharacterType::UPPER_CASE;
   } else {
      char_type = CharacterType::SYMBOL;
   }

   // Compute
   char transformed_char = character;

   if (char_type == CharacterType::UPPER_CASE) {
      transformed_char = character + TO_LOWER;
   } else if (char_type == CharacterType::LOWER_CASE) {
      transformed_char = character + TO_UPPER;
   }

   // Output

   if (char_type != CharacterType::SYMBOL) {
      if (char_type == CharacterType::UPPER_CASE) {
         std::cout << "La letra es mayuscula. ";
      } else if (char_type == CharacterType::LOWER_CASE) {
         std::cout << "La letra es minuscula. ";
      }

      std::cout << "Una vez convertida es '" << transformed_char << "'\n";
   } else {
      std::cout << "El carácter es un símbolo.\n";
   }

   return 0;
}