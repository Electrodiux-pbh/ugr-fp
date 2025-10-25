/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double base_salary;

   std::cout << "Introduzca el salario base: ";
   std::cin >> base_salary;

   /*
   He elegido la alternativa 2 guardar el salario en una variable, ya que
   permite mayor legibilidad de código, es posible que se use esta variable en
   el futuro y el compilador optimiza igualmente este tipo de expresiones así
   que no es más eficiente escribirla directamente (opción 1), y modificar el
   valor de la variable base_salary hace que deje de ser el salario base, con lo
   que en el futuro otro programador en el proyecto puede usarla sin saber que
   ha sido modificada con anterioridad he introducir problemas.
   */
   double final_salary = base_salary * 1.02;

   std::cout << "El salario tras aumentar el 2% es " << final_salary << "\n";

   return 0;
}