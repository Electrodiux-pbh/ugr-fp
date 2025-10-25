/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

double Potencia(double base, int expon) {
   double pot;
   int expon_positivo;

   if (base == 0 && expon == 0)
      pot = NAN; // NAN es la cte de indeterminación definida en cmath
   else {
      expon_positivo = abs(expon);
      pot = 1;

      for (int i = 1; i <= expon_positivo; i++)
         pot = pot * base;
   }

   if (expon < 0)
      pot = 1 / pot;

   return pot;
}

double round(double value, int decimal) {
   double multiplier = Potencia(10.0, decimal);
   double rounded_value = std::round(value * multiplier) / multiplier;

   return rounded_value;
}

double readNumber() {
   double number;

   std::cout << "Introduzca un número decimal: ";
   std::cin >> number;

   return number;
}

int readDigits() {
   int digits;

   bool is_input_valid;

   do {
      std::cout << "Introduzca la cifra a redondear: ";
      std::cin >> digits;

      is_input_valid = digits > 0;

      if (!is_input_valid) {
         std::cout << "El número de cifras ha de ser mayor que 0, vuelva a intentarlo.\n";
      }
   } while (!is_input_valid);

   return digits;
}

int main() {

   double number = readNumber();
   int digits = readDigits();

   double rounded_value = round(number, digits);

   std::cout << "El valor de la cifra redondeada es " << rounded_value << "\n";

   return 0;
}