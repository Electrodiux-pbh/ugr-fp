/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   int horas, minutos, segundos;

   // Entrada
   std::cout << "Introduce las horas: ";
   std::cin >> horas;
   std::cout << "Introduce los minutos: ";
   std::cin >> minutos;
   std::cout << "Introduce los segundos: ";
   std::cin >> segundos;

   constexpr int SEG_MIN = 60;
   constexpr int SEG_HORA = 3600;
   constexpr int SEG_DIA = 3600 * 24; // 1 día = 86400 segundos

   // Convertir todo a segundos
   int total_segundos = horas * SEG_HORA + minutos * SEG_MIN + segundos;

   // Calcular días, horas, minutos y segundos
   int dias = total_segundos / SEG_DIA;
   total_segundos %= SEG_DIA;

   int horas_finales = total_segundos / SEG_HORA;
   total_segundos %= SEG_HORA;

   int minutos_finales = total_segundos / SEG_MIN;
   int segundos_finales = total_segundos % SEG_MIN;

   // Salida
   std::cout << dias << " días, " << horas_finales << " horas, "
             << minutos_finales << " minutos, " << segundos_finales
             << " segundos." << "\n";

   return 0;
}