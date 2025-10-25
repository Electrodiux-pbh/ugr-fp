/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

// Ritmo a velocidad

int main() {
   int minutos, segundos;

   std::cout << "Introduce el ritmo (minutos y segundos por kilómetro):\n";
   std::cout << "Minutos: ";
   std::cin >> minutos;
   std::cout << "Segundos: ";
   std::cin >> segundos;

   // Convertir el ritmo a segundos totales por kilómetro
   int total_segundos = minutos * 60 + segundos;

   // Calcular la velocidad en km/h
   double velocidad = 3600.0 / total_segundos;

   std::cout << "La velocidad es: " << velocidad << " km/h\n";

   return 0;
}