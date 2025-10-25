/**
 * @author Pablo Bermejo Hernandez
 */

#include <cmath>
#include <iostream>

int main() {
   /*
   No se puede poner la expresión
   pi/6 = asin(0.5);
   porque es una ecuación y has de despejar para hacer el calculo que deseas y
   luego usar el operador = para asignar el valor.
   */

   double pi = std::asin(0.5) * 6;
   std::cout << "El valor de \u03C0 obtenido mediante el arcoseno de 0.5 es: "
             << pi << "\n";

   return 0;
}