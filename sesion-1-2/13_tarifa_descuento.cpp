/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double base_cost;

   std::cout << "Introduzca el coste inicial del billete: ";
   std::cin >> base_cost;

   constexpr double CLIENT_DISCOUNT = 4.0;
   constexpr double LONG_DISTANCE_DISCOUNT = 2.0;

   // La expresión se calcula en tiempo de compilación a 0.96
   double cost_client = base_cost * (1.0 - (CLIENT_DISCOUNT / 100.0));
   double cost_long_distance =
       base_cost * (1.0 - (LONG_DISTANCE_DISCOUNT / 100.0));

   std::cout << "El coste para el cliente (" << CLIENT_DISCOUNT << ") es "
             << cost_client << "\n";
   std::cout << "El coste para el viaje largo (" << LONG_DISTANCE_DISCOUNT
             << ") es " << cost_long_distance << "\n";

   return 0;
}