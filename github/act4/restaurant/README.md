# 🍽️ Práctica de Programación Orientada a Objetos en Python  
## Sistema de Gestión de Platillos

## 📌 Descripción

Este proyecto implementa un sistema básico para representar distintos tipos de platillos utilizando Programación Orientada a Objetos (POO) en Python.  
Se utiliza una clase base `Platillo`, de la cual heredan clases más específicas que representan comidas, bebidas y postres.

---

## 🧱 Estructura del Proyecto

Clases implementadas:

- `Platillo` (Clase base)
- `tipo_platillo` (Comidas principales)
- `tipo_bebida` (Bebidas)
- `gluten_free` (Postres con información sobre gluten)

Cada clase hereda atributos como nombre y precio, y define su propio comportamiento en el método `tipo()`.

---

## ⚙️ Ejecución del Programa

Ejemplo de uso del sistema:

```python
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