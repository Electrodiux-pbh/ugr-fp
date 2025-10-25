/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   int minimo, maximo, desplazamiento, a_desplazar;

   // Entrada
   std::cout << "Introduce el valor minimo y maximo del intervalo: ";
   std::cin >> minimo >> maximo;

   std::cout << "Introduce el valor del desplazamiento: ";
   std::cin >> desplazamiento;

   std::cout << "Introduce el valor a desplazar: ";
   std::cin >> a_desplazar;

   // Calcular el tamaño del intervalo
   int intervalo = maximo - minimo + 1;

   // Calcular el nuevo valor desplazado dentro del intervalo
   int resultado = minimo + (a_desplazar - minimo + desplazamiento) % intervalo;

   // Salida
   std::cout << "El resultado es: " << resultado << "\n";

   return 0;
}