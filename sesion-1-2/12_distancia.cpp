/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double distance;

   std::cout << "Introduzca la distancia en kilómetros: ";
   std::cin >> distance;

   constexpr double INITIAL_TARIF = 150;

   double cost = INITIAL_TARIF + 0.1 * distance;

   std::cout << "El coste de viajar " << distance << "km es de " << cost
             << "\u20AC\n";

   return 0;
}