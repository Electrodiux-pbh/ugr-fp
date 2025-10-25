/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double radius;

   // Entrada
   std::cout << "Introduzca el radio del circulo: ";
   std::cin >> radius;

   constexpr double PI = 3.1416;

   /*
   He elegido la opción 3, usar una constante llamada PI y luego usarla ya que
   me permite cambiarla en un único sitio de forma cómoda, y al darle al usuario
   la opción de introducir PI, puede introducir un valor que no se adecue
   */

   double area = PI * radius * radius;
   double circunference = 2 * PI * radius;

   // Salida
   std::cout << "El área del circulo es " << area << "\n";
   std::cout << "La circunferencia del circulo es " << circunference << "\n";

   return 0;
}