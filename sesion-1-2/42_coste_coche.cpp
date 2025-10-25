/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {
   // Constantes para los porcentajes
   constexpr double PORCENTAJE_GANANCIA = 0.20; // 20%
   constexpr double IVA = 0.16;                 // 16%

   // Entrada
   double costo_base;
   std::cout << "Ingrese el costo base del vehículo: ";
   std::cin >> costo_base;

   double ganancia_vendedor = costo_base * PORCENTAJE_GANANCIA;
   // Aplicamos el IVA sobre el producto sin el margen de beneficio
   double impuesto_iva = costo_base * IVA;
   double precio_final = costo_base + ganancia_vendedor + impuesto_iva;

   // Salida
   std::cout << "El precio final del automóvil es: " << precio_final
             << " unidades monetarias." << std::endl;

   return 0;
}
