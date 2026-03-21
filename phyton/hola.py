calificaciones = []
suma = 0
n = 0

for i in range(4):
    valor = int(input())
    calificaciones.append(valor)
    suma += valor
    n += 1

promedio = suma / n
print(promedio)
