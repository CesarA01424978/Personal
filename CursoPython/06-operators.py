# Conjunción (y). Ambas deben ser verdaderas.
print(True and True)
print(True & True, "\n")

# Disyunción (o). Una debe ser verdadera.
print(True or False)
print(True | False, "\n")

# Negación (no). Cambia al opuesto el valor.
print(not False, "\n")

# Intercalación (xor). 
print(4 ^ 5)    # Toma los bits que no coinciden y se los queda
print(~1, "\n") # Si es positivo en binario le suma un bit y lo hace negativo, si es negtivo le resta un bit y lo cambia a positivo

# Shifting (desplazamiento). Avanza un bit al lado que deseemos.
var = 17
var_right = var >> 1
var_left = var << 2
print("Entrada:", var, 
      "\nDesplazando 2 bit a la izquierda:", var_left, 
      "\nDesplazando 1 bit a la derecha:", var_right, "\n")

a=1
b=0
print("pruebas:", a ^ b)
