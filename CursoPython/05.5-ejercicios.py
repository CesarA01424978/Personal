'''
# Pirámide plana
blocks = int(input("Ingresa el número de bloques: "))
height = count = 0

for i in range(1, blocks):
    if count+i <= blocks:
        count += i
        height += 1
    else:
        break
else:
    if blocks == 1:
        height = 1
print("La altura de la pirámide:", height)


# Número que si es par se divide entre dos si no se multiplica por 3 y se le suma uno así hasta llegar al uno
c0 = int(input("Ingresa tu número(positivo y mayor que uno: "))
pasos = 0

while True:
    if c0 % 2 == 0:
        c0 //= 2
    else:
        c0 = c0*3 + 1
    
    pasos += 1
    print(c0)
    
    if c0 == 1:
        break

print("pasos =", pasos)

# Crea un bucle for que cuente de 0 a 10, e imprima números impares en la pantalla. Usa el esqueleto de abajo:

for i in range(1, 11):
    if i%2 != 0:
        print(i)
        

        
# Crea un bucle while que cuente de 0 a 10, e imprima números impares en la pantalla. Usa el esqueleto de abajo:

x = 1
while x < 11:
    if x%2 != 0:
        print(x)
    x += 1
   



# Crea un programa con un bucle for y una sentencia break. El programa debe iterar 
# sobre los caracteres en una dirección de correo electrónico, salir del bucle cuando 
# llegue al símbolo @ e imprimir la parte antes de @ en una línea. Usa el esqueleto de abajo:

text = ""

for ch in "john.smith@pythoninstitute.org":
    if ch == "@":
        break
    text += ch

print(text) 
''' 

# Crea un programa con un bucle for y una sentencia continue. El programa debe iterar sobre 
# una cadena de dígitos, reemplazar cada 0 con x, e imprimir la cadena modificada en la pantalla.


for digit in "0165031806510":
    if digit == "0":
        print("x", end="")
        continue
    print(digit, end="")