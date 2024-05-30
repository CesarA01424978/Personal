# Ejercicio con ciclo while
secret_number = 777
print(
"""
+================================+
| ¡Bienvenido a mi juego, muggle!|
| Introduce un número entero     |
| y adivina qué número he        |
| elegido para ti.               |
|¿Cuál es el número secreto?     |
+================================+
""")
miNum = int(input("Ingresa tu número: "))

while miNum != secret_number:
    print("¡Ja Ja! ¡Estás atrapado en mi bucle")
    miNum = int(input("Ingresa otro número: "))

print("¡Bien hecho, muggle! Eres libre ahora.\n")


# Ciclo for
for i in range(10): #Definimos cuántos (0 a 9)
    print(i)
    pass #para no dejar vacío la instrucción (aplica también con if, elif, else y while)
print("\n")

for i in range(2, 8): # Definimos de dónde(inicio) a dónde(uno antes de ese)
    print("El valor de i es", i)  
print("\n")

for i in range(2, 8, 3): # Definimos de dónde(inicio) a dónde(uno antes de ese) con saltos(de 3 en 3)
    print("El valor de i es", i)  
print("\n")




import time

# Escribe un bucle for que cuente hasta cinco.
for i in range(1, 6):
    # Cuerpo del bucle: imprime el número de iteración del bucle y la palabra "Mississippi".
    print(i, "Mississippi")
    # Cuerpo del bucle, emplea : 
    time.sleep(1)

# Escribe una función print con el mensaje final.
print("¡Lista o no, aquí voy!")




# Las funciones break y continue

# "break" detiene el ciclo 
print("La instrucción break:")
for i in range(1, 6):
    if i == 3:
        break
    print("Dentro del bucle.", i)
print("Fuera del bucle.")


# "continue" omite la instrucción siguiente
print("\nLa instrucción continue:")
for i in range(1, 6):
    if i == 3:
        continue
    print("Dentro del bucle.", i)
print("Fuera del bucle.")



# Los ciclos también pueden tener expeciones (else)
i = 10
while i < 5:
    print(i)
    i += 1
else:
    print("else:", i)


i = 111
for i in range(2, 1):
    print(i)
else:
    print("else:", i)
