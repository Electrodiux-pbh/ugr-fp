/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

double computeInterest(double capital, double interest_prct, int periods) {
   const double interest = interest_prct / 100.0;

   for (int i = 1; i <= periods; ++i) {
      capital += capital * interest;
   }

   return capital;
}

double readCapital() {
   double capital;
   bool is_input_valid;

   do {
      std::cout << "Introduzca el capital inicial: ";
      std::cin >> capital;

      is_input_valid = capital > 0.0;

      if (!is_input_valid) {
         std::cout << "Error, el capital tiene que ser mayor que 0.\n";
      }
   } while (!is_input_valid);

   return capital;
}

double readInterest() {
   double interest;
   bool is_input_valid;

   do {
      std::cout << "Introduzca el interés anual: ";
      std::cin >> interest;

      is_input_valid = interest > 0.0;

      if (!is_input_valid) {
         std::cout << "Error, el interés tiene que ser mayor que 0.\n";
      }
   } while (!is_input_valid);

   return interest;
}

int readYears() {
   int years;
   bool is_input_valid;

   do {
      std::cout << "Introduzca el número de años: ";
      std::cin >> years;

      is_input_valid = years > 0;

      if (!is_input_valid) {
         std::cout << "Error, el numero de años ha de ser mayor a 0.\n";
      }
   } while (!is_input_valid);

   return years;
}

int main() {
   double capital = readCapital();
   double interest = readInterest();
   int years = readYears();

   double final_capital = computeInterest(capital, interest, years);

   std::cout << "El capital al tras " << years << " años es de " << final_capital << "\n";

   return 0;
}