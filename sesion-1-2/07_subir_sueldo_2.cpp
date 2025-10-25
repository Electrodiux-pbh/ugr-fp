/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   double base_salary;

   std::cout << "Introduzca el salario base: ";
   std::cin >> base_salary;

   double final_salary_direct = base_salary * 1.05;

   double final_salary_sequential = base_salary;
   final_salary_sequential *= 1.02;
   final_salary_sequential *= 1.03;

   std::cout << "El salario tras aumentar el 5% es " << final_salary_direct
             << "\n";
   std::cout << "El salario tras aumentar 2% y después 3% es "
             << final_salary_sequential << "\n";

   return 0;
}