/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr double TRF_BASE = 150;
constexpr double TRF_PER_KM = 0.1;
constexpr int TRF_FREE_KMS = 300;

int main() {
   int distance;

   std::cout << "Introduce la distancia en km del vuelo: ";
   std::cin >> distance;

   double tarif = TRF_BASE;

   if (distance > TRF_FREE_KMS) {
      tarif += (distance - TRF_FREE_KMS) * TRF_PER_KM;
   }

   std::cout << "El precio final de la tarifa es de " << tarif << "€\n";

   return 0;
}