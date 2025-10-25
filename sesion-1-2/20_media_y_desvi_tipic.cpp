/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   double altura1, altura2, altura3;
   double media, desviacion;

   std::cout << "Introduce la altura de la primera persona: ";
   std::cin >> altura1;
   std::cout << "Introduce la altura de la segunda persona: ";
   std::cin >> altura2;
   std::cout << "Introduce la altura de la tercera persona: ";
   std::cin >> altura3;

   // Cálculo de la media aritmética
   media = (altura1 + altura2 + altura3) / 3.0;

   // Cálculo de la desviación estándar muestral
   double pow_1 = std::pow(altura1 - media, 2);
   double pow_2 = std::pow(altura2 - media, 2);
   double pow_3 = std::pow(altura3 - media, 2);

   desviacion = std::sqrt(((pow_1 + pow_2 + pow_3) / 3.0));

   std::cout << "La media aritmética es: " << media << "\n";
   std::cout << "La desviación estándar muestral es: " << desviacion << "\n";

   return 0;
}