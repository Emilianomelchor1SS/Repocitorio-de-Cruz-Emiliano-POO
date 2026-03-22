# 🧬 Sistema de Herencia en Python - Animales

Este proyecto implementa el concepto de herencia en Python mediante un sistema de clases que modela distintos tipos de animales, demostrando la reutilización de código y la especialización de comportamientos a través de programación orientada a objetos (POO).

---

## 🚀 Descripción del proyecto

Se desarrolló un sistema basado en una clase principal `Animal`, a partir de la cual se derivan clases específicas como `Perro` y `Gato`. Estas clases heredan atributos y métodos comunes, y redefinen comportamientos particulares según el tipo de animal.

El proyecto tiene como finalidad aplicar de forma práctica el concepto de herencia, evitando la duplicación de código y permitiendo una estructura más organizada y escalable.

---

## 🏛️ Clase base: `Animal`

La clase `Animal` contiene los elementos comunes a todos los animales:

- Atributos:
  - `nombre`
  - `edad`

- Métodos:
  - `describir()`: muestra información del animal  
  - `hablar()`: método genérico que puede ser redefinido  

Esta clase funciona como base para las demás, permitiendo reutilizar su lógica.

---

## 🐶 Clase `Perro`

- Hereda de `Animal`  
- Sobreescribe el método `hablar()` para representar el sonido de un perro  
- Utiliza directamente los atributos heredados sin necesidad de redefinirlos  

---

## 🐱 Clase `Gato`

- Hereda de `Animal`  
- Sobreescribe el método `hablar()` para representar el sonido de un gato  
- Comparte la misma estructura base que `Perro`  

---

## ⚙️ Funcionamiento del sistema

En el archivo `main.py` se crean distintas instancias de las clases:

- Objetos de tipo `Gato`  
- Objetos de tipo `Perro`  

Se ejecutan métodos como:

- `hablar()` → comportamiento específico según la clase  
- `describir()` → método heredado desde `Animal`  

Esto demuestra cómo una clase hija puede:
- Usar métodos heredados  
- Modificar comportamientos sin alterar la clase base  

---


---

## 🧠 Conceptos aplicados

- Programación orientada a objetos (POO)  
- Herencia  
- Clases y objetos  
- Sobreescritura de métodos  
- Modularización del código  

---

## 📈 Posibles mejoras

- Agregar más tipos de animales  
- Implementar atributos adicionales (raza, color, etc.)  
- Crear interacción con el usuario  
- Integrar un sistema más complejo de comportamientos  

---

## 🎯 Conclusión

Este proyecto demuestra cómo la herencia permite crear sistemas más organizados, reutilizables y fáciles de mantener. Al definir una clase base y especializar su comportamiento en clases derivadas, se logra una estructura clara y eficiente.

---

## 👤 Autor

Emiliano Alexei Cruz Melchor  
Estudiante de Sistemas Computacionales