/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   int hour_1, min_1, sec_1;
   int hour_2, min_2, sec_2;

   // First timestamp
   std::cout << "Introduce el primer timestamp:\n";

   std::cout << "Hora: ";
   std::cin >> hour_1;

   std::cout << "Minutos: ";
   std::cin >> min_1;

   std::cout << "Segundos: ";
   std::cin >> sec_1;

   // Second timestamp
   std::cout << "Introduce el segundo timestamp:\n";

   std::cout << "Hora: ";
   std::cin >> hour_2;

   std::cout << "Minutos: ";
   std::cin >> min_2;

   std::cout << "Segundos: ";
   std::cin >> sec_2;

   constexpr int SEG_MIN = 60;
   constexpr int SEG_HOUR = SEG_MIN * 60;

   /*
   La diferencia de tiempo es la diferencia entre horas por el número de
   segundos por hora, más la diferencia de minutos por el número de segundos por
   minuto más la diferencia de segundos
   */
   int time_difference = (hour_2 - hour_1) * SEG_HOUR +
                         (min_2 - min_1) * SEG_MIN + (sec_2 - sec_1);

   std::cout << "La diferencia en segundos entre los instantes es de "
             << time_difference << "s\n";

   return 0;
}