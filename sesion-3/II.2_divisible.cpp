/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   int num_1, num_2;

   std::cout << "Introduzca dos números para comprobar si son divisibles: ";
   std::cin >> num_1 >> num_2;

   /*
   Para evitar duplicidad de código se podría usar un macro o de forma más
   segura y correcta una función
   */

   if ((num_1 % num_2 == 0) || (num_2 % num_1 == 0)) {
      std::cout << "Uno de ellos divide al otro\n";
   } else {
      std::cout << "Ninguno divide al otro\n";
   }

   return 0;
}