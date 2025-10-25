/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   double ax, ay; // Punto A
   double bx, by; // Punto B

   std::cout << "Introduzca la coordenada X del punto A: ";
   std::cin >> ax;

   std::cout << "Introduzca la coordenada Y del punto A: ";
   std::cin >> ay;

   std::cout << "Introduzca la coordenada X del punto B: ";
   std::cin >> bx;

   std::cout << "Introduzca la coordenada Y del punto B: ";
   std::cin >> by;

   double dx = ax - bx;
   double dy = ay - by;

   double distance = std::sqrt(dx * dx + dy * dy);

   std::cout << "La distancia entre el punto A(" << ax << ", " << ay
             << ") y el punto B(" << bx << ", " << by << ") es " << distance;

   return 0;
}