# Una tupla es como una cadena de valores

# Crear una tupla vacía 
empty_tuple = ()

# Tupla de un elemento
one_element_tuple_1 = (1, ) # También puede ser sin el paréntesis

# Leer los elementos de una tupla
my_tuple = (1, 10, 100, 1000)

print(my_tuple[0])
print(my_tuple[-1])
print(my_tuple[1:])
print(my_tuple[:-2])

for elem in my_tuple:
    print(elem)
print('\n')

# No se puede modificar una tupla una vez creada
#Error#     my_tuple.append(10000)
#Error#     del my_tuple[0]
#Error#     my_tuple[1] = -10


# la función len() acepta tuplas, y regresa el número de elementos contenidos dentro
my_tuple = (1, 10, 100)
print(len(my_tuple))
print('\n')

# el operador + une elementos a tuplas
t1 = my_tuple + (1000, 10000)
print(t1)
print('\n')

# el operador * multiplicar las tuplas
t2 = my_tuple * 3
print(t2)
print('\n')

# los operadores in y not in funcionan de la misma manera que en las listas
print(10 in my_tuple)
print(-10 not in my_tuple)
print('\n')
