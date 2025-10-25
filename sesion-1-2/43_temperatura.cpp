/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double celsius;

   // Input
   std::cout << "Introduce la temperatura en grados Celsius: ";
   std::cin >> celsius;

   // Convertir la temperatura a Fahrenheit
   double fahrenheit = (celsius * 180.0 / 100.0) + 32.0;

   // Mostrar el resultado
   std::cout << "La temperatura en grados Fahrenheit es: " << fahrenheit
             << "\n";

   return 0;
}