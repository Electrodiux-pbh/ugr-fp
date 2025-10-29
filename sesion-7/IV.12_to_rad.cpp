/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr double PI = 3.14159265;
constexpr double DEG_TO_RAD = PI / 180.0;

double DegToRad(double deg) { return deg * DEG_TO_RAD; }

double ReadDegrees() {

   double deg;

   std::cout << "Introduce an angle in degrees:\n";
   std::cin >> deg;

   return deg;
}

int main() {

   double deg = ReadDegrees();

   double rad = DegToRad(deg);

   std::cout << "The angle " << deg << "º in radians is " << rad << "\n";

   return 0;
}