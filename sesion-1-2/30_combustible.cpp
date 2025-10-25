/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double distancia_recorrida, litros_consumidos, litros_restantes;

   std::cout << "Introduce la distancia recorrida (en kms): ";
   std::cin >> distancia_recorrida;

   std::cout << "Introduce los litros de gasolina consumidos: ";
   std::cin >> litros_consumidos;

   std::cout << "Introduce los litros que quedan en el depósito: ";
   std::cin >> litros_restantes;

   // Cálculos
   double consum_kp_litro = distancia_recorrida / litros_consumidos;
   double consum_litro_cien_km =
       (litros_consumidos / distancia_recorrida) * 100;
   double autonomiaRestante = consum_kp_litro * litros_restantes;

   // Salida
   std::cout << "Consumo: " << consum_kp_litro << " km/litro" << "\n";
   std::cout << "Consumo: " << consum_litro_cien_km << " litros/100 km"
             << "\n";
   std::cout << "Autonomía restante: " << autonomiaRestante << " km"
             << "\n";

   return 0;
}