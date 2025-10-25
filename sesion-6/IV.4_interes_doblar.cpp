/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int timeToMultiplyCapital(double interest_prct, int multiplier) {
   int periods = 0;

   if (interest_prct > 0 && multiplier > 0) {
      const double interest = interest_prct / 100.0;

      double accumulator = 1.0;

      while (accumulator < multiplier) {
         accumulator += accumulator * interest;
         periods++;
      }
   }

   return periods;
}

double readInterest() {
   double interest;
   bool is_input_valid;

   do {
      std::cout << "Introduce el interés (porcentaje anual):\n";
      std::cin >> interest;

      is_input_valid = interest >= 0;

      if (!is_input_valid) {
         std::cout << "El valor introducido ha de ser mayor que cero, vuelva a intentarlo.\n";
      }
   } while (!is_input_valid);

   return interest;
}

constexpr int CAPITAL_MULTIPLIER = 2;

int main() {
   double interest = readInterest();

   /*
   El tiempo para multiplicar el capital solo depende del porcentaje de interés y no
   del capital inicial, por eso esta solución no pide el capital inicial.
   */

   int years = timeToMultiplyCapital(interest, CAPITAL_MULTIPLIER);

   std::cout << "Para multiplicar el capital X" << CAPITAL_MULTIPLIER;
   std::cout << " al " << interest << "% de interés han de pasar " << years << " años\n";

   return 0;
}