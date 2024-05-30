# Crear listas (arrays) en python 
numbers = [10, 5, 7, 2, 1]

# Crear listas vacías
my_list = []

# Pueden almacenar múltiples objetos
mix_list = [1, None, True, "Soy una cadena", 256, 0]

# Pueden estar anidadas
list_of_list = [1, 'a', ["lista", 64, [0, 1], False]]

# Cambiar el valor de una posición en específico (empezando por el cero)
numbers[0] = 111

# Para eliminar un elemento de la lista
del numbers[1]

# Para eliminar una lista
del list_of_list



# Para sacar el tamaño (cantidad) de la lista
print(len(numbers))
print("Contenido de la lista:", numbers)

# Los elementos negativos son legales. Un elemento con un índice igual a -1 es el último en la lista.
print("-1:", numbers[-1], "\n")

# Agregar un número al final de la lista
numbers.append(4)

# Insertar en la posición que deseemos (primer valor) el elemento (segundo valor)
numbers.insert(1, 222)

print(numbers)

# Sumar cada elemento de la lista
print(sum(numbers))

# Ciclos for con listas
total = 0
for i in numbers:
    total += i
print("Total:", total, "\n")


# Intercambiar fácilmente los elementos de la lista para revertir su orden:
my_list = [10, 1, 8, 3, 5]
print("Lista antes:", my_list)
 
my_list[0], my_list[4] = my_list[4], my_list[0] # Sin la necesidad de hacer un auxiliar ya que no se pierde el valor
my_list[1], my_list[3] = my_list[3], my_list[1]

print("Lista después:", my_list)
 
# Las listas al copiarse guardan la dirección lo que significa que si cambias el valor de otro lado le afecta a la copia 
list_1 = [1]
list_2 = list_1
list_1[0] = 2
print(list_2)
# Si se quiere evitar eso se debe crear una "rebanada" de la lista (copia los elementos, no la dirección)
list_1 = [1]
list_2 = list_1[:] # Todo
#my_list[inicio:fin-1]  # Todo (es lo mismo que arriba)
#my_list[:num]  Desde el inicio hasta donde queramos
#my_list[num:] Desde donde queramos hasta el inicio
print(list_2)

# "del" también puede borrar rebanadas
del mix_list[1:3]


# Los operadores in y not in
# "in" verifica si un elemento dado (el argumento izquierdo) está actualmente almacenado 
# en algún lugar dentro de la lista (el argumento derecho) - el operador devuelve True en este caso.
my_list = [0, 3, 12, 8, 2]

print(5 in my_list)
print(5 not in my_list)
print(12 in my_list)


# Crear listas con ciclos (para valores repetidos)
row = ["WHITE_PAWN" for i in range(8)]
print("Row:", row)
squares = [x ** 2 for x in range(10)]
print("Sqr:", squares)
twos = [2 ** i for i in range(8)]
print("twos:", twos)
odds = [x for x in squares if x % 2 != 0 ]
print("odds:", odds)


# Crear matrices 
board = [["EMPTY" for i in range(8)] for j in range(8)]
print("board:", board, "\n")

# Crear matrices tridimencionales
rooms = [[[False for r in range(20)] for f in range(15)] for t in range(3)]
print("roms:", rooms)
# Acceder a ella
rooms[1][9][13] = True

t = [[3-i for i in range (3)] for j in range (3)]
print("T:", t)

my_list = [[0, 1, 2, 3] for i in range(2)]
print("Ls:", my_list)


for i in range(1):
    print("#")
else:
    print("#")
    
z = 10
y = 0
x = y < z and z > y or y > z and z < y
print("X =", x)
