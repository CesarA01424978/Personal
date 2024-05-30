# Para imprimir un texto
print("Hola, World") 

# Para imprimir un texto y un salto de línea
print("Vino la lluvia\ny se la llevó.")

# Para imprimir un texto y que el último argumento sea lo que deseemos
print("Mi", "nombre", "es", "Monty", "Python", end=".") # Siempre al último la instrucción extra
print("")

# Para imprimir un texto y que entre cada argumento sea lo que deseemos
print("Mi", "nombre", "es", "Monty", "Python.", sep="-")

# Se crea una función (con el nombre print erroneo a propósito) para imprimir n cantidad de flechas
def pRint(n):
    print(  '        *        '*n,"\n",
            "      * *        "*n, "\n",
            "     *   *       "*n, "\n",
            "    *     *      "*n, "\n",
            "   *       *     "*n, "\n",
            "  *         *    "*n, "\n",
            "  ***     ***    "*n, "\n", 
            "    *     *      "*n,"\n",
            "    *     *      "*n,"\n",
            "    *     *      "*n,"\n",
            "    *     *      "*n,"\n",
            "    *******      "*n,"\n")

pRint(8)


# Para omitir un símbolo de cierre en una oración se usa el \ y así lo toma como texto
print('Greg\'s book.')
print("'Greg's book.'")
print('"Greg\'s book."')
print("Greg\'s book.")
#print('"Greg's book."') # Por ejemplo así da error (no se usó)


# Imprime octales (también se puede con mayúscuas)
print(0o123)
# Imprime hexadecimales
print(0x123)
# Imprime binario
print(0b10101)


# Imprime potencias
print(3E8) #E = x10^n

# Operadores básicos (literales)
print("Suma:", 1+1)
print("Resta:", 1-1) #
print("División:", 10/3) #
print("División entera:", 10//3) # si es negativo va hacia el próximo neg
print("Multiplicación:", 1*2) #
print("Potencia:", 2**3**2) # de derecha a izquierda se resuelven
print("Módulo:", 9%6) # si es neg queda negativo el residuo

Ñero = 1
Ñero = False + True - True
print("Ñero =", Ñero)

ver = '3.14'
print("Python version: " + ver) # También se puede usar el + en vez de la coma pero nunca juntos
print("Python version:", ver) # Se pueden juntar comillas simples y dobles ya que ambos son textos

# Operadores Abreviados 
# x = x * 2              ==>>           x *= 2
# sheep = sheep + 1      ==>>           sheep += 1
# x = x ** 2             ==>>           x **= 2


# Función round()
numero = 0.5333333333
print("El número redondeado es:", round(numero))

kilometers = 12.25
miles = 7.38

miles_to_kilometers = 1.61 * miles
kilometers_to_miles = kilometers / 1.61

print(miles, "millas son", round(miles_to_kilometers, 2), "kilómetros")
print(kilometers, "kilómetros son", round(kilometers_to_miles, 2), "millas")

# Comentar varias líneas (en visual) Ctrl + K + C
# Descomentar varias líneas (en visual) Ctrl + K + U
uncomment_me = 1
uncomment_me_too = 3
uncomment_me_also = 5

print(uncomment_me, uncomment_me_too, uncomment_me_also, sep="\n")


# Para imprimir grandes textos
print(
"""
+================================+
| ¡Bienvenido a mi juego, muggle!|
| Introduce un número entero     |
| y adivina qué número he        |
| elegido para ti.               |
|¿Cuál es el número secreto?     |
+================================+
""")