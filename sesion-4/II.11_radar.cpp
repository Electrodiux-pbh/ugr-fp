/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr double RADAR_STATIC_ERR_MARGIN = 5;
constexpr double RADAR_MOVABLE_ERR_MARGIN = 7;

constexpr double RADAR_SPEED_PERCENTAGE_THRESHOLD = 100;

constexpr char TO_UPPER_CASE = 'A' - 'a';

constexpr char STATIC_RADAR = 'F';

int main() {
   char radar_type;
   double speed = 10;

   std::cout << "Introduzca el tipo de radar fijo o movil (F/M): ";
   std::cin >> radar_type;

   std::cout << "Introduzca la velocidad captada: ";
   std::cin >> speed;

   // Normalize radar type input

   // If is lower case
   if (radar_type >= 'a' && radar_type <= 'z') {
      // Transform to upper case
      radar_type += TO_UPPER_CASE;
   }

   // Compute error margin

   double error_margin = 0.0;

   if (radar_type == STATIC_RADAR) {
      error_margin = RADAR_STATIC_ERR_MARGIN;
   } else {
      error_margin = RADAR_MOVABLE_ERR_MARGIN;
   }

   // In case is over the percentage threshold
   if (speed > RADAR_SPEED_PERCENTAGE_THRESHOLD) {
      // Calculate the error margin for the speed
      error_margin = speed * (error_margin / 100.0);
   }

   double legal_speed = speed - error_margin;

   std::cout << "La velocidad imputada es de " << legal_speed << " km/h\n";

   return 0;
}