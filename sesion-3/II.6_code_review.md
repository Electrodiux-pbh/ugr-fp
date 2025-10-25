Pablo Bermejo Hernández

## Ejercicio 1

```cpp
char tipo_radar;
cin >> tipo_radar;
if (tipo_radar == 'F' && tipo_radar == 'f')
```

En este código podemos encontrar un error lógico que es que se está comprobando
que la letra del tipo del radar sea igual simultaneamente a dos valores diferentes,
lo que es imposible, se debería comprobar que fuera igual a uno o al otro valor.

`tipo_radar == 'F' || tipo_radar == 'f'`

Además del error lógico, podemos observar problemas de mantenibilidad de código, siendo el
más claro y evidente la falta del uso de constantes para los diferentes tipos de
radares. Y como segundo error, y más importante a mi juicio, es el uso de la doble
comprobación para asegurarse que la letra sea igual 'F' ya sea esta mayuscula o minúscula.

Para este caso, hay mejores alternativas como crear una función para comprobar que
un carácter es igual a otro ignorando la capitalización o como segunda opción (y probablemente
más correcta) sanitanizar la variable `tipo_radar` pasandola siempre a minuscula
o mayuscula antes de empezar a trabajar con ella.

## Ejercicio 2

```cpp
double velocidad;
cin >> velocidad;
if (velocidad > 100 && velocidad < 70)
   cout << "\nVelocidad fuera del rango";
```

En este código podemos encontrar un error lógico, siendo este que se está comprobando
que la velocidad sea mayor que 100 y menor que 70 simultáneamente, lo que es imposible.
Debería comprobarse que sea menor que 100 y mayor que 70.

`velocidad < 100 && velocidad > 70`

Además del error lógico, también encontramos la falta del uso de constantes para
dar nombre y permitir mayor mantenibilidad en el futuro, es posible que el uso
de constantes pudiera también haber ayudado a encontrar el error lógico de forma
más fácil y evidente.

## Ejercicio 3

```cpp
double velocidad;
cin >> velocidad;
if (velocidad > 100 || velocidad > 110)
   cout << "Velocidad excesiva";
```

En este ejemplo, podemos observar un "error" o inconsistencia lógica (ya que no sé
a que hace referencia cada literal, no se cual era la intención original), sin embargo
es evidente que este código solo comprueba si la velocidad es mayor que 100, ya que
si la segunda condición se cumple, también lo hará la primera, haciendo que esta
segunda sea innecesaria. Se podría simplemente comprobar que la velocidad sea
mayor que 100.

`velocidad > 100`

Destacar también la falta del uso de constantes como en los otros ejercicios.
