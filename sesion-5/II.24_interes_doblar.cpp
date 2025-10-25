/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {

   double initial_capital;
   double interest;

   bool is_input_valid = false;

   do {
      std::cout << "Introduce el capital inicial:\n";
      std::cin >> initial_capital;

      is_input_valid = initial_capital >= 0;

      if (!is_input_valid) {
         std::cout << "El valor introducido ha de ser mayor que cero, vuelva a intentarlo.\n";
      }
   } while (!is_input_valid);

   do {
      std::cout << "Introduce el interés (porcentaje anual):\n";
      std::cin >> interest;

      is_input_valid = interest >= 0;

      if (!is_input_valid) {
         std::cout << "El valor introducido ha de ser mayor que cero, vuelva a intentarlo.\n";
      }
   } while (!is_input_valid);

   double capital = initial_capital;
   int years = 0;

   while (capital < initial_capital * 2) {
      capital += capital * (interest / 100.0);
      years++;
   }

   std::cout << "Para al menos doblar la cantidad inicial han de pasar " << years << " años\n";

   return 0;
}