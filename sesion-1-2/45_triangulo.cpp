/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   double a, b, theta;

   // Solicitar al usuario los valores de los lados y el ángulo
   std::cout << "Introduce el valor del lado a (en cm): ";
   std::cin >> a;
   std::cout << "Introduce el valor del lado b (en cm): ";
   std::cin >> b;
   std::cout << "Introduce el valor del ángulo (en grados): ";
   std::cin >> theta;

   // Convertir el ángulo de grados a radianes
   constexpr double PI = 3.141592653589793;

   double theta_radians = theta * PI / 180.0;

   // Calcular el área del triángulo
   double area = 0.5 * a * b * std::sin(theta_radians);

   // Salida
   // \u00B2 es el caracter para el cuadrado
   std::cout << "El área del triángulo es: " << area << " cm\u00B2\n";

   return 0;
}