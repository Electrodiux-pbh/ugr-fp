/**
 * @author Pablo Bermejo Hernandez
 */

#include <iostream>

int main() {

   int max_mark_student_code = 0;
   double max_mark = 0;

   bool end_program = false;

   while (!end_program) {

      int student_code;
      double mark = 0;

      // Get student code
      std::cin >> student_code;

      end_program = student_code == 0;

      if (!end_program) {

         // Process the marks

         int accumulator = 0;
         int mark_count = 0;

         int last_number_buffer;

         // Read first character
         std::cin >> last_number_buffer;

         while (last_number_buffer != -1) {
            accumulator += last_number_buffer;
            mark_count++;

            std::cin >> last_number_buffer;
         }

         mark = static_cast<double>(accumulator) / static_cast<double>(mark_count);

         if (max_mark < mark) {
            max_mark = mark;
            max_mark_student_code = student_code;
         }
      }
   }

   std::cout << "Alumno con mas nota es " << max_mark_student_code << " con media de " << max_mark << "\n";

   return 0;
}