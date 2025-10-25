/**
 * @author Pablo Bermejo Hernandez
 */

#include <algorithm>
#include <cmath>
#include <iostream>

int main() {
   double grados_lat1, grados_lon1, h1;
   double grados_lat2, grados_lon2, h2;

   // Entrada
   std::cout << "Introduce latitud (grados), longitud (grados), altura (m): ";
   std::cin >> grados_lat1 >> grados_lon1 >> h1;

   std::cout << "Introduce latitud (grados), longitud (grados), altura (m): ";
   std::cin >> grados_lat2 >> grados_lon2 >> h2;

   constexpr double PI = 3.14159265358979323846;
   constexpr double DEG_TO_RAD = PI / 180.0;
   constexpr double R = 6372797.560856; // radio medio terrestre en metros

   double lat1 = grados_lat1 * DEG_TO_RAD;
   double lon1 = grados_lon1 * DEG_TO_RAD;
   double lat2 = grados_lat2 * DEG_TO_RAD;
   double lon2 = grados_lon2 * DEG_TO_RAD;

   double dlat = lat2 - lat1;
   double dlon = lon2 - lon1;

   double sin_lat = std::sin(dlat / 2);
   double sin_lon = std::sin(dlon / 2);

   double a =
       sin_lat * sin_lat + std::cos(lat1) * std::cos(lat2) * sin_lon * sin_lon;
   double c = 2 * std::asin(std::min(1.0, std::sqrt(a)));
   double dp = R * c;

   double dr = std::sqrt(dp * dp + (h2 - h1) * (h2 - h1));

   // Salida
   std::cout.precision(15);

   std::cout << "Distancia Pitagoras: " << dp << "\n";
   std::cout << "Distancia Haversine: " << dr << "\n";

   return 0;
}
