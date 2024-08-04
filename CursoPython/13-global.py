# La palabra global se usa para cambiar los valores de una variable que fue definida fuera de una función
def prueba():
    global x
    x = 1
    
x = 0
prueba()
print(x)

# si una variable fue declarada antes de llamar a una función y se hace mención de ella dentro de la función 
# se tomará como variable global a la que esté nombrada igual, pero no podrá cambiar sus valores, ejemplo:
def funcion():
    print(var)

var = True
funcion()


