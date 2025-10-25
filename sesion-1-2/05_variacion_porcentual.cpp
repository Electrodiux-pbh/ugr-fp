/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   double initial_value, final_value;

   std::cout << "Introduzca el valor inicial del producto: ";
   std::cin >> initial_value;

   std::cout << "Introduzca el valor final del producto: ";
   std::cin >> final_value;

   double vp = std::abs(100 * ((final_value - initial_value) / initial_value));

   std::cout << "La variación porcentual del producto es del " << vp << "%\n";

   return 0;
}