''' 
El consumo de combustible de un automóvil se puede expresar de muchas maneras diferentes. Por ejemplo, en Europa, se muestra 
como la cantidad de combustible consumido por cada 100 kilómetros. En los EE. UU., se muestra como la cantidad de millas 
recorridas por un automóvil con un galón de combustible. Tu tarea es escribir un par de funciones que conviertan l/100km 
a mpg (milas por galón), y viceversa.
Las funciones:
    - se llaman liters_100km_to_miles_gallon y miles_gallon_to_liters_100km respectivamente;
    - toman un argumento (el valor correspondiente a sus nombres)

Aquí hay información para ayudarte:
- 1 milla = 1609.344 metros.
- 1 galón = 3.785411784 litros.

'''

def liters_100km_to_miles_gallon(liters):
    gallons = liters / 3.785411784
    return 100000 / 1609.344 / gallons

def miles_gallon_to_liters_100km(miles):
    m = miles * 1609.344
    return  m * 100000 / 3.785411784

print(liters_100km_to_miles_gallon(3.9))
print(liters_100km_to_miles_gallon(7.5))
print(liters_100km_to_miles_gallon(10.))
print(miles_gallon_to_liters_100km(60.3))
print(miles_gallon_to_liters_100km(31.4))
print(miles_gallon_to_liters_100km(23.5))