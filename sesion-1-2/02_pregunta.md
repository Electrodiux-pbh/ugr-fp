Pablo Bermejo Hernandez

El resultado de las operaciones es:

- Salario base: 3500
- Salario final: 1200

Y no, asignar `salario_final = salario_base;` no liga el valor de las variables durante el transcurso del programa,
ya que estas guardan de forma independiente un valor y esa asignación copia el valor. En caso de ser punteros o referencias
a la misma región de memoria si podría vincularse el valor de las variables, pero no es el caso.
