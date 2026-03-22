from platillo import Platillo
from comida import tipo_platillo
from bebida import tipo_bebida
from postre import gluten_free

p1 = tipo_platillo("Tacos al pastor", 85.0, "Principal")
p2 = tipo_bebida("Limonada", 35.0, "Fría")
p3 = gluten_free("Flan", 45.0, "No")
print("--------------------------------------------------------")
lista = [p1, p2, p3]

for platillo in lista:
    print("Información del platillo:")
    platillo.mostrar_info()
    platillo.tipo()
    print("--------------------------------------------------------")