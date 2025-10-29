/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>
#include <string>

std::string ReadString(char terminator) {

   std::string str;
   char chr;

   chr = std::cin.get();

   while (chr != terminator) {
      str.push_back(chr);
      chr = std::cin.get();
   }

   return str;
}

std::string RemoveLastChars(std::string str, char chr) {

   while (!str.empty() && str.back() == chr) {
      str.pop_back();
   }

   return str;
}

constexpr char TERMINATOR_CHAR = '#';

int main() {

   std::string original = ReadString(TERMINATOR_CHAR);

   char chr;
   std::cin >> chr;

   std::string shorten = RemoveLastChars(original, chr);

   /*
   Para modificar el valor de la cadena original se podría o sobreescribir el valor de la llamada
   a la función en original.

   original = RemoveLastChars(original, chr);

   O bien, si se pudiera diseñar la función para que tome el string por referencia y no por valor.
   */

   std::cout << shorten << "\n";
}