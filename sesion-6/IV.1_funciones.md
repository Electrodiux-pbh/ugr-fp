Pablo Bermejo Hernández

# Ejercicio 1

```cpp
int Sumale1(){
   return entero + 1;
}
```

La función no tiene ningún parametro, se le debería añadir a los argumentos de la función
un argumento.

```cpp
int Sumale1(int entero) {
   return entero + 1;
}
```

# Ejercicio 2

```cpp
int Sumale1(int entero){
   entero = entero + 1;
}
```

La variable entero se está pasando por valor, además de que la función no devuelve nada cuando
su return type es int, como solución se puede devolver "entero + 1" ho hacerla una función
void pasando el entero por referencia, dependerá de la intención de la función.

```cpp
int Sumale1(int entero) {
   return entero + 1;
}
```

```cpp
void Sumale1(int& entero) {
   entero = entero + 1;
}
```

# Ejercicio 3

```cpp
int ValorAbsoluto(int entero){
   if (entero < 0)
      entero = -entero;
   else
      return entero;
}
```

Por la sentencia else, la función no tiene retorno en caso de "entero < 0" por lo que dará
un error de compilación. Para solucionarlo, simplemente quitar la sentencia else.

```cpp
int ValorAbsoluto(int entero){
   if (entero < 0)
      entero = -entero;

   return entero;
}
```

# Ejercicio 4

```cpp
bool EsPositivo(int valor){
   if (valor > 0)
      return true;
}
```

Esta función tiene la instrucción return dentro del if, por lo que en caso del que el valor sea negativo
no tiene valor de return, lo mejor es devolver el valor de la expresión directamente.

```cpp
bool EsPositivo(int valor) {
   return valor > 0;
}
```

# Ejercicio 5

```cpp
long ParteEntera(double real){
   int parte_entera;
   parte_entera = trunc(real);
   return parte_entera;
}
```

Al llamar a la función std::trunc esta devuelve un valor de tipo double que no tiene cast implicito
a int. Además en caso de que el número sea muy grande, al primero guardarlo en un int y luego
en un dato de tipo long, es posible que pierda preción con números muy grandes.

```cpp
long ParteEntera(double real){
   return static_cast<long>(std::trunc(real));
}
```

# Ejercicio 6

```cpp
int Sumale1(int entero){
   return entero + 1;
}

int main(){
   int n = 5;
   Sumale1(n);

   cout << n;
}
```

Es evidente que el programa imprime 5 porque el valor devuelto por la función no se está almacenando
en ningún sitio. Por lo que la solución es guardar el valor de la expresión en la variable n.

```cpp
int Sumale1(int entero){
   return entero + 1;
}

int main(){
   int n = 5;
   n = Sumale1(n);

   cout << n;
}
```
