#Programa el cual recibe el radio de un circulo y regresa el area y perimetro
 
import math

radio = int(input("El radio es: "))

area = math.pi * radio * radio
perimetro =  2 * math.pi * radio

print(f"El area del  circulo es: {area} \nEl perimetro del circulo es: {perimetro}")
