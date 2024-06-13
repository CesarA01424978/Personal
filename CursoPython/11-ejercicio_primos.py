''' 
Un número natural es primo si es mayor que 1 y no tiene divisores más que 1 y si mismo.
Tu tarea es escribir una función que verifique si un número es primo o no.
La función:
    se llama is_prime;
    toma un argumento (el valor a verificar)
    devuelve True si el argumento es un número primo, y False de lo contrario. 
'''
def is_prime(num):
    if num > 1:
        for i in range(2, num):
            if num % i == 0:
                return False
        return True
    else: 
        return False

#print(is_prime(5))

for i in range(1, 20):
    if is_prime(i + 1):
        print(i + 1, end=" ")
print()