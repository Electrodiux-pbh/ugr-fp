/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double metros;

   std::cout << "Introduce la longitud en metros: ";
   std::cin >> metros;

   double pulgadas = metros * 1000 / 25.4; // 1 pulgada = 25.4 milímetros
   double pies = metros * 100 / 30.48;     // 1 pie = 30.48 centímetros
   double yardas = metros / 0.9144;        // 1 yarda = 0.9144 metros
   double millas = metros / 1609.344;      // 1 milla = 1609.344 metros
   double millas_marinas = metros / 1852;  // 1 milla marina = 1852 metros

   std::cout << "Equivalencias:" << "\n";
   std::cout << "Pulgadas: " << pulgadas << "\n";
   std::cout << "Pies: " << pies << "\n";
   std::cout << "Yardas: " << yardas << "\n";
   std::cout << "Millas: " << millas << "\n";
   std::cout << "Millas marinas: " << millas_marinas << "\n";

   return 0;
}