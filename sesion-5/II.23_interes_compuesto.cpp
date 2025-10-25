/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {

   double capital, interest;
   int years;

   bool is_input_valid = false;

   // Capital
   do {
      std::cout << "Introduzca el capital inicial: ";
      std::cin >> capital;

      is_input_valid = capital > 0.0;

      if (!is_input_valid) {
         std::cout << "Error, el capital tiene que ser mayor que 0.\n";
      }
   } while (!is_input_valid);

   // Interest
   do {
      std::cout << "Introduzca el interés anual: ";
      std::cin >> interest;

      is_input_valid = interest > 0.0;

      if (!is_input_valid) {
         std::cout << "Error, el interés tiene que ser mayor que 0.\n";
      }
   } while (!is_input_valid);

   // Años
   do {
      std::cout << "Introduzca el número de años: ";
      std::cin >> years;

      is_input_valid = years > 0;

      if (!is_input_valid) {
         std::cout << "Error, el numero de años ha de ser mayor a 0.\n";
      }
   } while (!is_input_valid);

   // Compute
   for (int i = 1; i <= years; ++i) {
      capital += capital * (interest / 100.0);

      std::cout << "Capital obtenido transcurrido " << i << " ";

      if (i == 1) {
         std::cout << "año";
      } else {
         std::cout << "años";
      }

      std::cout << " = " << capital << "\n";
   }

   return 0;
}