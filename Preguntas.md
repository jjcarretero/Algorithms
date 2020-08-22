# Problema de los caballos
**Tenemos 25 caballos entre los que necesitamos encontrar los 3 más rápidos.**
**Puedes hacer correr simultáneamente un máximo de 5 caballos al mismo tiempo, sólo conoceremos sus posiciones, nunca su tiempo, ni su velocidad.**
**¿Cuántas carreras necesitamos para encontrar a los tres caballos más rápidos?**


## Solución

	a1   b1   c1   d1   e1
	a2   b2   c2   d2   e2
	a3   b3   c3   d3   e3
	a4   b4   c4   d4   e4
	a5   b5   c5   d5   e5

Hacemos cinco carreras (A, B, C, D ,E) y quedan en este orden. ( 1, 2, 3, 4, 5).

Si despues haemos una segunda carrera sólo con los primeros tenemos los puntos de pivote: Imaginemos que b1 > e1 > a1 > c1 > d1

Sabemos que todos los de c y todos los de d no pueden ser ninguno de los tres mas rapidos. con lo cual tenemos, ordenados de izquierda a derecha, estos bloques:

	b1   e1   a1
	b2   e2   a2
	b3   e3   a3
	b4   e4   a4
	b5   e5   a5

Pero sabemos que solo pueden ser tres, asi que los 4 y los 5 estan fuera:

	b1   e1   a1
	b2   e2   a2
	b3   e3   a3

b1 es el más rapido de todos, eso esta claro. Por lo que sabemos que es el TOP 1.

Para sacar el segundo más rapido sabemos que puede ser o b2 o e1.

Y a su vez el tercero más rapido puede ser o b2, o e1; o a1, o e2, o b3

Por lo que si hacemos una septima carrera que englobe a:

	     e1    a1
	b2   e2
	b3

Tenemos nuestros 3 mejores caballos: b1 + los dos mas rapidos de la ultima carrera. En total, necesitamos 7 carreras.

# Probabilidad: Coches por semaforo
**Suponemos que 'p' es el numero de coches que pasan por minuto por un determinado cruce entre las 5PM y las 6 PM.**
**'p' tiene una distribución de Poisson de media 3.**
**¿Cuál es la probabilidad de observar menos de 3 coches durante cualquier minuto de dicho intervalo?**

## Solución
La probabilidad de que pasen menos de 3 coches por minuto, implica que puede ser que pasen 0, que pase 1 o que pasen 2.
Esto supondría el siguiente planteamiento:

	PR (x < 3) = PR (x = 0) + PR (x = 1) + PR (x = 2)

Si sabemos que la media (lambda) es 3. Sólo tendriamos que aplicar la formula para diferentes k's:

	((e^(-3) * 3^0) / 0) + ((e^(-3) * 3^1) / 1) + ((e^(-3) * 3^2) / 2)

Los resultados de estas operaciones son:

	0.05 + 0.149 + 0.224

Es decir, tenemos una probabilidad del 0,423% de que suceda.

# Probabilidad: Dos digitos divisibles entre 7
**De todos los numeros enteros de 2 digitos de entre 1 y 100, hemos de elegir un numero al azar.**
**¿Qué probabilidades hay de que el número seleccionado NO sea divisible entre 7?**

## Solución
