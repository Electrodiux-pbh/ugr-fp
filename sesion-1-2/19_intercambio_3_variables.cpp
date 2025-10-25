/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   int x, y, z;

   std::cout << "Introduce el valor de x: ";
   std::cin >> x;
   std::cout << "Introduce el valor de y: ";
   std::cin >> y;
   std::cout << "Introduce el valor de z: ";
   std::cin >> z;

   int temp = x;
   x = z;
   z = y;
   y = temp;

   std::cout << "Después del intercambio:" << std::endl;
   std::cout << "x = " << x << std::endl;
   std::cout << "y = " << y << std::endl;
   std::cout << "z = " << z << std::endl;
}