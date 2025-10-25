/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   double angle_deg_1, angle_deg_2;

   std::cout << "Introduzca el primer angulo en grados hexadecimales: ";
   std::cin >> angle_deg_1;

   std::cout << "Introduzca el segundo angulo en grados hexadecimales: ";
   std::cin >> angle_deg_2;

   // Uso const ya que se supone que estas variables no han de ser modificadas
   // tras su inicialización
   const double pi = std::asin(0.5) * 6;
   const double deg_to_rad = pi / 180.0;

   double angle_rad_1 = angle_deg_1 * deg_to_rad;
   double angle_rad_2 = angle_deg_2 * deg_to_rad;

   std::cout << "El primer angulo en radianes es " << angle_rad_1 << "\n";
   std::cout << "El segundo angulo en radianes es " << angle_rad_2 << "\n";

   return 0;
}