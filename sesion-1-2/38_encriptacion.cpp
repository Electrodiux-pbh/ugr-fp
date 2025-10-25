/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>
using namespace std;

int main() {
   int clave;
   char letra;

   // Entrada
   cout << "Introduce la clave: ";
   cin >> clave;
   cout << "Introduce una letra mayúscula: ";
   cin >> letra;

   // El rango del alfabeto (0-25)
   constexpr int RANGO_ALFABETO = 'Z' - 'A' + 1;
   clave = clave % RANGO_ALFABETO;

   // Codificar el carácter
   char letra_codificada = 'A' + (letra - 'A' + clave) % RANGO_ALFABETO;

   // Salida
   cout << "La letra codificada es: " << letra_codificada << endl;

   return 0;
}