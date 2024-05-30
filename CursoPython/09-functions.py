def introduction(first_name, last_name):
    print("Hola, mi nombre es", first_name, last_name)

# Se pueden especificar los valores al llamar la función sin importar el orden
introduction(first_name = "James", last_name = "Bond")
introduction(last_name = "Skywalker", first_name = "Luke")
# Si no existen marca error
#introduction(surname="Skywalker", first_name="Luke")

# Se pueden combinar ambas formas (siempre y cuando las que no se especifícan sigan el orden)
def adding(a, b, c):
    print(a, "+", b, "+", c, "=", a + b + c)

adding(3, c = 1, b = 2)

