/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   double grados_lat1, grados_lon1, grados_lat2, grados_lon2;
   std::cout << "Introduce latitud 1 (grados): ";
   std::cin >> grados_lat1;
   std::cout << "Introduce longitud 1 (grados): ";
   std::cin >> grados_lon1;
   std::cout << "Introduce latitud 2 (grados): ";
   std::cin >> grados_lat2;
   std::cout << "Introduce longitud 2 (grados): ";
   std::cin >> grados_lon2;

   // Conversión de grados a radianes
   constexpr double PI = 3.141592;
   constexpr double DEG_TO_RAD = PI / 180.0;

   double lat1 = grados_lat1 * DEG_TO_RAD;
   double lon1 = grados_lon1 * DEG_TO_RAD;
   double lat2 = grados_lat2 * DEG_TO_RAD;
   double lon2 = grados_lon2 * DEG_TO_RAD;

   // Cálculo de 'a'
   double dlat = lat2 - lat1;
   double dlon = lon2 - lon1;

   double sin_lat = std::sin(dlat / 2);
   double sin_lon = std::sin(dlon / 2);

   double a =
       sin_lat * sin_lat + std::cos(lat1) * std::cos(lat2) * sin_lon * sin_lon;

   std::cout << "El valor de a es: " << a << "\n";

   return 0;
}
