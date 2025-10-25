/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double g_total;

   // Entrada
   std::cout << "Introduce la ganancia total de la empresa: ";
   std::cin >> g_total;

   double g_disenador, g_fabricante;

   // Cálculo de las ganancias
   // El diseñador cobra el doble que cada fabricante, por lo que:
   // g_total = g_disenador + 3 * g_fabricante
   // g_disenador = 2 * g_fabricante
   // Sustituyendo: g_total = 2 * g_fabricante + 3 * g_fabricante
   // g_total = 5 * g_fabricante
   g_fabricante = g_total / 5.0;
   g_disenador = 2.0 * g_fabricante;

   // Salida
   std::cout << "Ganancia del diseñador: " << g_disenador << "\n";
   std::cout << "Ganancia de cada fabricante: " << g_fabricante << "\n";

   return 0;
}