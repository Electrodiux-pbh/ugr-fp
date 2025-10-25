/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double base_cost;
   int client_discount, long_distance_discount;

   std::cout << "Introduzca el coste inicial del billete: ";
   std::cin >> base_cost;

   std::cout << "Introduzca el descuento para el cliente (en %): ";
   std::cin >> client_discount;

   std::cout << "Introduzca el descuento para el viaje largo (en %): ";
   std::cin >> long_distance_discount;

   double cost_client = base_cost * (1.0 - (client_discount / 100.0));
   double cost_long_distance =
       base_cost * (1.0 - (long_distance_discount / 100.0));

   std::cout << "El coste para el cliente (" << client_discount << "%) es "
             << cost_client << "\n";
   std::cout << "El coste para el viaje largo (" << long_distance_discount
             << "%) es " << cost_long_distance << "\n";

   return 0;
}