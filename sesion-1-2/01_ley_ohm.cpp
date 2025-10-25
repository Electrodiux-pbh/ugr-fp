/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double intensity, resistance;

   // Entrada
   std::cout << "Introduzca la intensidad en Amperios (A): ";
   std::cin >> intensity;

   // u2126 es el unicode para el simbolo del ohmnio
   std::cout << "Introduzca la resistencia en Ohmnios (\u2126): ";
   std::cin >> resistance;

   double voltage = intensity * resistance;

   // Salida
   std::cout << "El voltaje resultante es " << voltage << " Voltios (V)\n";

   return 0;
}