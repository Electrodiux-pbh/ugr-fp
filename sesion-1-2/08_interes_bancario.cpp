/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double interest, capital;

   std::cout << "Introduce el capital inicial: ";
   std::cin >> capital;

   std::cout << "Introduce el porcentaje de interés: ";
   std::cin >> interest;

   double total = capital + capital * (interest / 100.0);

   /*
   En caso de hacer la asignación en la variable "capital" en vez de en otra
   variable "total" tiene como ventajas que si quieres hacer más operaciones
   sobre las previas evitas el uso de multiples variables, pero por otro lado se
   pierde el valor original introducido que se podría necesitar más adelante
   obligando a reescribir parte del código o llevar a bugs indeseados.
   */

   std::cout << "El capital total será de " << total << "\n";

   return 0;
}