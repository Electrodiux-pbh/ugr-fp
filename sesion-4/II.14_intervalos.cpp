/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

enum class IntervalBoundType { CLOSED, OPEN };

int main() {

   // Input

   char left_bracket, right_bracket, comma;
   double lower_bound, upper_bound;

   std::cout << "Introduce el intervalo en el formato (o [ cota_inferior , "
                "cota_superior ) o ]: ";
   std::cin >> left_bracket >> lower_bound >> comma >> upper_bound >>
       right_bracket;

   double value;

   std::cout << "Introduce el valor a comprobar: ";
   std::cin >> value;

   IntervalBoundType lower_type, upper_type;

   // Assign type of interval boundaries

   if (left_bracket == '[')
      lower_type = IntervalBoundType::CLOSED;
   else
      lower_type = IntervalBoundType::OPEN;

   if (right_bracket == ']')
      upper_type = IntervalBoundType::CLOSED;
   else
      upper_type = IntervalBoundType::OPEN;

   // Logical check

   bool is_over_lower_bound =
       value > lower_bound ||
       (lower_type == IntervalBoundType::CLOSED && value == lower_bound);

   bool is_under_upper_bound =
       value < upper_bound ||
       (upper_type == IntervalBoundType::CLOSED && value == upper_bound);

   // Output

   if (is_over_lower_bound && is_under_upper_bound) {
      std::cout << "El valor está en el intervalo\n";
   } else {
      std::cout << "El valor no está en el intervalo\n";
   }

   return 0;
}