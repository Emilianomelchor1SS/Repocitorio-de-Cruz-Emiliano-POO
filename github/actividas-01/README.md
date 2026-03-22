# 📚 Sistema de Gestión de Estudiantes en Python

Este proyecto implementa una clase en Python llamada `Estudiante`, la cual permite representar estudiantes, almacenar sus datos básicos y gestionar sus calificaciones para calcular su promedio.

---

## 🚀 Descripción del proyecto

El objetivo de este código es modelar un estudiante mediante programación orientada a objetos (POO), permitiendo:

- Almacenar información personal (nombre, edad, carrera)
- Registrar múltiples calificaciones
- Calcular el promedio de calificaciones
- Mostrar información del estudiante de forma estructurada

---

## 🧱 Estructura del código

### 🔹 Clase `Estudiante`

La clase contiene los siguientes atributos:

- `nombre`: Nombre del estudiante
- `edad`: Edad del estudiante
- `carrera`: Carrera que estudia
- `calificaciones`: Lista que almacena las calificaciones del estudiante

---

## ⚙️ Métodos implementados

### ➤ `__init__(self, nombre, edad, carrera)`
Constructor de la clase. Inicializa los datos del estudiante y crea una lista vacía para las calificaciones.

---

### ➤ `agregar_calificacion(self, calificacion)`
Permite agregar una nueva calificación a la lista del estudiante.

```python
self.calificaciones.append(calificacion)