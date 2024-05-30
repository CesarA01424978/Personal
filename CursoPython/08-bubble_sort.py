# Forma tradicional
my_list = [8, 10, 6, 2, 4]  # lista a ordenar
swapped = True  # Lo necesitamos verdadero (True) para ingresar al bucle while.
 
while swapped:
    swapped = False  # no hay intercambios hasta ahora
    for i in range(len(my_list) - 1):
        if my_list[i] > my_list[i + 1]:
            swapped = True  # ¡ocurrió el intercambio!
            my_list[i], my_list[i + 1] = my_list[i + 1], my_list[i]
 
print(my_list)


# Python ya tiene un método de ordenamiento (también funciona con letras)
my_list = [8, 10, 6, 2, 4]
my_list.sort()
print(my_list)

# Para invertir listas
my_list.reverse()
print(my_list)