/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   // Declaración de variables
   int g_total;

   // Entrada
   std::cout << "Introduce la ganancia total de la empresa: ";
   std::cin >> g_total;

   double g_disenador, g_fabricante;

   // División int / double que devuelve double
   g_fabricante = g_total / 5.0;
   g_disenador = 2.0 * g_fabricante;

   // Salida
   std::cout << "Ganancia del diseñador: " << g_disenador << "\n";
   std::cout << "Ganancia de cada fabricante: " << g_fabricante << "\n";

   return 0;
}