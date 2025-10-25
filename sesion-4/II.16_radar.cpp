/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

// Radars

enum class RadarType {
   STATIC,
   MOVABLE,
   TRACE,
};

constexpr char RDR_STATIC_CHAR = 'F';
constexpr char RDR_MOVABLE_CHAR = 'M';
constexpr char RDR_TRACE_CHAR = 'T';

constexpr double RADAR_STATIC_ERR_MARGIN = 5;
constexpr double RADAR_MOVABLE_ERR_MARGIN = 7;
constexpr double RADAR_TRACE_ERR_MARGIN = 3;

constexpr double RADAR_SPEED_PERCENTAGE_THRESHOLD = 100;

// General purpose constants

constexpr char TO_UPPER_CASE = 'A' - 'a';

// Error constants

constexpr int ERR_UNKNOWN_RADAR_TYPE = -1;

int main() {
   char radar_char;
   double speed = 10;

   RadarType radar_type;

   std::cout << "Introduzca el tipo de radar fijo, movil o tramo (F,M,T): ";
   std::cin >> radar_char;

   // Normalize radar type input

   // If is lower case
   if (radar_char >= 'a' && radar_char <= 'z') {
      // Transform to upper case
      radar_char += TO_UPPER_CASE;
   }

   if (radar_char == RDR_TRACE_CHAR) {
      radar_type = RadarType::TRACE;
   } else if (radar_char == RDR_MOVABLE_CHAR) {
      radar_type = RadarType::MOVABLE;
   } else if (radar_char == RDR_STATIC_CHAR) {
      radar_type = RadarType::STATIC;
   } else {
      std::cout << "El tipo de radar " << radar_char << " no se reconoce.";
      return ERR_UNKNOWN_RADAR_TYPE;
   }

   std::cout << "Introduzca la velocidad captada: ";
   std::cin >> speed;

   // Compute error margin

   double error_margin = 0.0;

   if (radar_type == RadarType::STATIC) {
      error_margin = RADAR_STATIC_ERR_MARGIN;
   } else if (radar_type == RadarType::MOVABLE) {
      error_margin = RADAR_MOVABLE_ERR_MARGIN;
   } else if (radar_type == RadarType::TRACE) {
      error_margin = RADAR_TRACE_ERR_MARGIN;
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