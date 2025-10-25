/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   int poblacion_inicial, tasa_natalidad, tasa_mortalidad, tasa_migracion;

   // Entrada
   std::cout << "Introduce la población inicial: ";
   std::cin >> poblacion_inicial;
   std::cout << "Introduce la tasa de natalidad (por mil): ";
   std::cin >> tasa_natalidad;
   std::cout << "Introduce la tasa de mortalidad (por mil): ";
   std::cin >> tasa_mortalidad;
   std::cout << "Introduce la tasa de migración (por mil): ";
   std::cin >> tasa_migracion;

   // Inicializar la población actual
   int poblacion_actual = poblacion_inicial;

   // Calcular la población después de 3 años
   int nacimientos = (poblacion_actual * tasa_natalidad) / 1000;
   int muertes = (poblacion_actual * tasa_mortalidad) / 1000;
   int migracion = (poblacion_actual * tasa_migracion) / 1000;
   poblacion_actual += nacimientos - muertes + migracion;
   std::cout << "Población estimada al final del año 1: " << poblacion_actual
             << "\n";

   nacimientos = (poblacion_actual * tasa_natalidad) / 1000;
   muertes = (poblacion_actual * tasa_mortalidad) / 1000;
   migracion = (poblacion_actual * tasa_migracion) / 1000;
   poblacion_actual += nacimientos - muertes + migracion;
   std::cout << "Población estimada al final del año 2: " << poblacion_actual
             << "\n";

   nacimientos = (poblacion_actual * tasa_natalidad) / 1000;
   muertes = (poblacion_actual * tasa_mortalidad) / 1000;
   migracion = (poblacion_actual * tasa_migracion) / 1000;
   poblacion_actual += nacimientos - muertes + migracion;
   std::cout << "Población estimada al final del año 3: " << poblacion_actual
             << "\n";

   return 0;
}