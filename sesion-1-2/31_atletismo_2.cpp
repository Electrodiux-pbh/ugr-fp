/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double velocidad;

   std::cout << "Introduce la velocidad (kilómetros por hora): ";
   std::cin >> velocidad;

   // Calcular el tiempo en segundos por kilómetro
   double segundos_por_km = 3600.0 / velocidad;

   // Convertir a minutos y segundos
   int minutos = static_cast<int>(segundos_por_km) / 60;
   int segundos = static_cast<int>(segundos_por_km) % 60;

   std::cout << "El ritmo es: " << minutos << " minutos y " << segundos
             << " segundos por kilómetro\n";
}