Pablo Bermejo Hernandez

# Elección tipo de dato

1. **Edad de una persona**

Para representar la edad de una persona utilizaría un `unsigned int` ya que es una variable discreta que nunca ha de ser negativa.

2. **PIB**

Para el PIB utilizaría un tipo de dato entero ya que la precisión a nivel de centimos no es primordial, y en tal extraño caso, la variable podría simplemente medir el número de centimos. Sin embargo dado las grandes cifras que se manejan utilizaría un entero de 64 bits que en C++ es denotado normalmente por `long int` pero para asegurarme utilizaría `int64_t` del header `cstdint`.

3. **Ser primo o no**

Para representar la cualidad de ser primo o no utilizaría un dato de tipo `bool`ya que es una condición de verdadero o falso.

4. **Estado civil**

Para representar el estado civil utilizaría un `enum` ya que me permite actualizarlo con el tiempo a otros posibles casos, además de hacer el código mas legible y entendible.

5. **Sexo de una persona**

Para representar el sexo de una persona, si bien se podría usar un boolean (o bool en C++) ya que tiene dos casos, es más complicado de mantener ya que no hay una noción clara de si que indica cada valor. Aunque se podría renombrar las variables a "es_hombre" o "es_mujer" fuerza a no usar algo más universal como "sexo", por este motivo considero que es más apropiado un `enum` ya que es más importante muchas veces la claridad y mantenimiento del código sobre todo si es algo que no tiene un impacto real en la eficiencia del programa.
