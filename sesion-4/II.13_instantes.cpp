/**
 * @author Pablo Bermejo Hernández
 */

#include <iostream>

int main() {

   int hour1, min1, sec1;
   int hour2, min2, sec2;

   std::cout << "Introduzca horas minutos seguntos del intervalo 1: ";
   std::cin >> hour1 >> min1 >> sec1;

   std::cout << "Introduzca horas minutos seguntos del intervalo 2: ";
   std::cin >> hour2 >> min2 >> sec2;

   if (hour1 >= hour2 && min1 >= min2 && sec1 >= sec2) {
      std::cout << "El primer time-stamp es posterior\n";
   } else {
      std::cout << "El primer time-stamp es anterior\n";
   }

   return 0;
}