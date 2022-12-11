# Ejemplo cifrado en C

Cifrado con raiz primitiva en c.

Explicación del proceso paso a paso

* Paso 1: A y B obtienen los número públicos P=761 y r=6 (Siendo P un número primo y r la raiz primitiva)

* Paso 2: A escribe una clave privada, por ejemplo a=4444 y B escribe una clave privada b=3

* Paso 3: A y B calculan valores los valores de la clave pública
A -> x=(6^4 modulo 761)
B -> y=(6^3 modulo 761)

* Paso 4: A envía la clave pública "x" a B y B envía la clave pública "y" a A

* Paso 5: A y B calculan claves simétricas.
A : Ka = y^a mod p
B: Kb = x^b mod p

* Paso 6: Ka y Kb es el secreto compartido
