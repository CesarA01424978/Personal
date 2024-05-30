# Se puede asignar a una variable
anything = input("Dime lo que sea...")
print("Hmm...", anything)
anything = input("... ¿qué es eso?")

# inputs floats e ints
# ingresa un valor flotante para la variable a aquí
A = float(input("ingresa el valor de a: "))

# ingresa un valor flotante para la variable b aquí
B = int(input("ingresa el valor de b: "))

# mostrar el resultado de la suma aquí
print("a + b =", A + B)
print("\nDescargando virusAphaTroyan22...")

# Concatenar inputs
fnam = input("¿Me puedes dar tu nombre por favor? ")
lnam = input("¿Me puedes dar tu apellido por favor? ")
print("Gracias. ")
print("\nTu nombre es " + fnam + " " + lnam + ".")

# Se pueden multiplicar caracteres
print("+" + 10 * "-" + "+")
print(("|" + " " * 10 + "|\n") * 5, end="")
print("+" + 10 * "-" + "+")


# Para saber el tipo de variable
x = input("Ingresa un número: ") # El usuario ingresa un 2
print(type(x))