/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   char leftBracket, rightBracket, comma;
   double lowerBound, upperBound;

   std::cout << "Introduce el intervalo en el formato (o [ cota_izquierda , "
                "cota_derecha ) o ]: ";
   std::cin >> leftBracket >> lowerBound >> comma >> upperBound >> rightBracket;

   // Mostrar el intervalo introducido
   std::cout << "El intervalo introducido es: " << leftBracket << lowerBound
             << ", " << upperBound << rightBracket << "\n";

   return 0;
}