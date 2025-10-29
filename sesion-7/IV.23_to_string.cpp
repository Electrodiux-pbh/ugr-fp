/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>
#include <string>

double Pow(double base, int exp) {

   double pow;
   int positive_exp;

   if (base == 0 && exp == 0) {
      pow = NAN;
   } else {
      positive_exp = abs(exp);
      pow = 1;

      for (int i = 1; i <= positive_exp; i++) {
         pow = pow * base;
      }
   }

   if (exp < 0) {
      pow = 1 / pow;
   }

   return pow;
}

double Round(double value, int decimal) {

   double multiplier = Pow(10.0, decimal);
   double rounded_value = std::round(value * multiplier) / multiplier;

   return rounded_value;
}

std::string RemoveLastChars(std::string str, char chr) {

   while (!str.empty() && str.back() == chr) {
      str.pop_back();
   }

   return str;
}

constexpr int MAX_DECIMAL_ROUND = 6;

std::string DoubleToString(double num, int decimal) {

   if (decimal < 0) {
      decimal = 0;
   } else if (decimal > MAX_DECIMAL_ROUND) {
      decimal = MAX_DECIMAL_ROUND;
   }

   num = Round(num, decimal);
   std::string num_as_str = std::to_string(num);

   num_as_str = RemoveLastChars(num_as_str, '0');

   if (num_as_str.back() == '.') {
      num_as_str.pop_back();
   }

   return num_as_str;
}

int main() {

   double num;
   int decimal;

   std::cout << "Introduce a number:\n";
   std::cin >> num;

   std::cout << "Introduce the number of decimals:\n";
   std::cin >> decimal;

   std::cout << DoubleToString(num, decimal) << '\n';

   return 0;
}