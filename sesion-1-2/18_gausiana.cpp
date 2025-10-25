/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {

   double media, desv;
   double x;

   std::cout << "Introduce la media: ";
   std::cin >> media;

   std::cout << "Introduce la desviación típica: ";
   std::cin >> desv;

   std::cout << "Introduce el valor de x: ";
   std::cin >> x;

   constexpr double PI = 3.1416;

   double exponent = -0.5 * std::pow((x - media) / desv, 2);
   double value = (1.0 / (desv * std::sqrt(2 * PI))) * std::exp(exponent);

   std::cout << "El resultado es " << value << "\n";

   return 0;
}