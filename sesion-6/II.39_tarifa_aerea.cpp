/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

constexpr double TRF_BASE = 150;
constexpr double TRF_PER_KM = 0.1;
constexpr int TRF_FREE_KMS = 300;

// Discount constants

constexpr int DCT_DISTANCE_KM = 700;
constexpr double DCT_DISTANCE_PERC = 2.0 / 100.0;

constexpr int DCT_CLIENT_LVL_1_PTS = 100;
constexpr double DCT_CLIENT_LVL_1_PERC = 3.0 / 100.0;

constexpr int DCT_CLIENT_LVL_2_PTS = 200;
constexpr double DCT_CLIENT_LVL_2_PERC = 4.0 / 100.0;

// Client-points constants

constexpr int CLIENT_POINTS_MIN = 0;
constexpr int CLIENT_POINTS_MAX = 400;

// Control Characters

constexpr char TERMINATOR_CHARACTER = '#';
constexpr char NEW_TICKET_CHARACTER = 'N';

int main() {

   char control_character = 0;

   do {
      std::cin >> control_character;

      if (control_character == NEW_TICKET_CHARACTER) {
         int distance;
         int clnt_pts;

         bool is_input_valid = false;

         do {
            std::cout << "Introduce la distancia en km del vuelo:\n";
            std::cin >> distance;

            is_input_valid = distance >= 0;

            if (!is_input_valid) {
               std::cout << "La distancia ha de ser mayor o igual a cero.\n";
            }
         } while (!is_input_valid);

         do {
            std::cout << "Introduce el número de puntos del cliente:\n";
            std::cin >> clnt_pts;

            is_input_valid = clnt_pts >= CLIENT_POINTS_MIN && clnt_pts <= CLIENT_POINTS_MAX;

            if (!is_input_valid) {
               std::cout << "El número de puntos ha de estar entre " << CLIENT_POINTS_MIN << " y " << CLIENT_POINTS_MAX
                         << ".\n";
            }
         } while (!is_input_valid);

         // Calcular tarifa sin descuentos

         double tarif = TRF_BASE;

         if (distance > TRF_FREE_KMS) {
            tarif += (distance - TRF_FREE_KMS) * TRF_PER_KM;
         }

         // Calcular y aplicar descuentos

         double dscnt_perc = 0.0;

         // Descuento distancia
         if (distance > DCT_DISTANCE_KM) {
            dscnt_perc += DCT_DISTANCE_PERC;
         }

         // Descuento fidelidad
         if (clnt_pts > DCT_CLIENT_LVL_2_PTS) {
            dscnt_perc += DCT_CLIENT_LVL_2_PERC;
         } else if (clnt_pts > DCT_CLIENT_LVL_1_PTS) {
            dscnt_perc += DCT_CLIENT_LVL_1_PERC;
         }

         double tarif_disct = tarif * (1.0 - dscnt_perc);

         std::cout << "El precio final de la tarifa es de " << tarif_disct << "€\n";
      }
   } while (control_character != TERMINATOR_CHARACTER);

   return 0;
}