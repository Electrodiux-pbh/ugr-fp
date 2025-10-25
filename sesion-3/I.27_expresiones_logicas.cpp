/**
 * @author Pablo Bermejo Hernandez
 */

int main() {

   // Letra es minuscula
   char letter;
   bool cond_1 = letter >= 'a' && letter <= 'z';

   // Edad está entre 18 y 65 años (ambos incluidos)
   int age;
   bool cond_2 = age >= 18 && age <= 65;

   // Valor está entre 1 y 100 (ambos incluidos)
   int rnd_value;
   bool cond_3 = rnd_value >= 1 && rnd_value <= 100;

   // Un año es bisiesto
   int year;
   bool cond_4 = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

   // Velocidad es mayor o igual a 100km/h
   double velocity;
   bool cond_5 = velocity >= 100.0;

   // Letra es vocal
   bool cond_6 = letter == 'a' || letter == 'e' || letter == 'i' ||
                 letter == 'o' || letter == 'u';

   // Una recta de coeficientes A, B, C está inclinada
   double A, B, C;
   bool cond_7 = A != 0 && B != 0;

   // Comprobar que la recta está bien especificada (A y B no son 0
   // simultaneamente)
   bool cond_8 = !(A == 0 && B == 0);

   return 0;
}