/**
 * @author Pablo Bermejo Hernandez
 */

int main() {

   // Es minuscula
   char letra;
   bool cond_1 = letra >= 'a' && letra <= 'z';

   // Es entre 18 y 65 años
   int edad;
   bool cond_2 = edad >= 18 && edad <= 65;

   // Es entre 1 y 100 (asumimos inclusivo)
   int adivine;
   bool cond_3 = adivine >= 1 && adivine <= 100;

   // Es bisiesto
   int year;
   bool cond_4 = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

   // Es mas de 100km/h
   double velocidad;
   bool cond_5 = velocidad >= 100.0;

   // Es vocal
   bool cond_6 = letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||
                 letra == 'u';

   // Está inclinada
   double A, B, C;
   bool cond_7 = A != 0 && B != 0;

   // Recta bien especificada (A y B no son 0 simultaneamente)
   bool cond_8 = !(A == 0 && B == 0);

   return 0;
}