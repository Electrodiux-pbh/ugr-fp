Pablo Bermejo Hernández

### Apartado A

```cpp
if (edad > 18)
   es_mayor_edad = true;
else
   es_mayor_edad = false;
```

### Apartado B

```cpp
if (edad > 18)
   if (ingresos <= MAX_INGRESOS)
      suscept_ayuda = true;
   else
      suscept_ayuda = false;
   else if (ingresos > MIN_INGRESOS)
      suscept_ayuda = true;
else
   suscept_ayuda = false;
```
