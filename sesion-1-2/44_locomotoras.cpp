/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   // Declaración de variables
   double distancia, vel_1, vel_2;

   // Entrada
   std::cout << "Introduce la distancia inicial entre las locomotoras: ";
   std::cin >> distancia;
   std::cout << "Introduce la velocidad de la primera locomotora: ";
   std::cin >> vel_1;
   std::cout << "Introduce la velocidad de la segunda locomotora: ";
   std::cin >> vel_2;

   // Cálculo del tiempo hasta el choque
   double t = distancia / (vel_1 + vel_2);

   // Cálculo de las distancias recorridas por cada locomotora
   double distancia1 = vel_1 * t;
   double distancia2 = vel_2 * t;

   // Salida
   std::cout << "Tiempo hasta el choque: " << t << " unidades de tiempo.\n";
   std::cout << "Distancia recorrida por la primera locomotora: " << distancia1
             << " unidades de distancia.\n";
   std::cout << "Distancia recorrida por la segunda locomotora: " << distancia2
             << " unidades de distancia.\n";

   return 0;
}