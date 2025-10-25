/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {

   double pi_1 = 256.0 / 81.0;
   double pi_2 = 3.0 + (1.0 / 8.0);
   double pi_3 = 377.0 / 120.0;

   std::cout << "Primera aproximación de \u03C0: " << pi_1 << "\n";
   std::cout << "Segunda aproximación de \u03C0: " << pi_2 << "\n";
   std::cout << "Tercera aproximación de \u03C0: " << pi_3 << "\n";

   return 0;
}