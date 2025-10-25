/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {

   int right_box, left_box;

   std::cout << "Introduzca el valor de la caja de la derecha ";
   std::cin >> right_box;

   std::cout << "Introduzca el valor de la caja de la izquierda ";
   std::cin >> left_box;

   int temp = right_box;
   right_box = left_box;
   left_box = temp;

   // También podríamos usar este algoritmo de bitwise-xor para intercambiar
   // variables sin usar una variable extra

   // right_box = right_box ^ left_box;
   // left_box = right_box ^ left_box;
   // right_box = right_box ^ left_box;

   std::cout << "La caja derecha vale " << right_box << "\n";
   std::cout << "La caja izquierda vale " << left_box << "\n";

   return 0;
}