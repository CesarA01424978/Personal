if(False):
    print("jsjsjs")
elif(2==0):
    print("eso qué?")
else:
    print("WTF?")
    
a = max(1,2,3) # sacar el máximo de una secuencia
b = min(1,2,3) # sacar el mínimo de una secuencia

x, y, z = 5, 10, 8
x = 0.000000000000000001
y = 0

print(x == y)


# Python entenderá que la línea continua en la siguiente si se termina una línea de código con el símbolo 
# de diagonal invertida (\).

def bmi(weight, height):
    if height < 1.0 or height > 2.5 or \
    weight < 20 or weight > 200:
        return None

    return weight / height ** 2


print(bmi(352.5, 1.65))