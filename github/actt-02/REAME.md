# 🐾 Sistema de Mascota Virtual en Python

Este proyecto implementa una clase en Python que simula una mascota virtual, permitiendo interactuar con ella mediante acciones como alimentarla y jugar, afectando su nivel de felicidad.

---

## 🚀 Descripción del proyecto

El programa modela una mascota utilizando programación orientada a objetos (POO). A través de distintos métodos, se puede modificar su estado interno y consultar su nivel de felicidad.

El objetivo es comprender cómo funcionan las clases, atributos y métodos en Python, aplicándolos en un ejemplo práctico y dinámico.

---

## 🧱 Estructura del código

### 🔹 Clase `mascota`

La clase representa una mascota con los siguientes atributos:

- `nombre`: Nombre de la mascota  
- `tipo`: Tipo de animal (perro, gato, etc.)  
- `edad`: Edad de la mascota  
- `nivelFelicidad`: Nivel de felicidad (0 a 100)  

---

## ⚙️ Métodos implementados

### ➤ `alimentar()`
Incrementa el nivel de felicidad en **10 puntos**.  
Si el valor supera 100, se ajusta automáticamente al máximo permitido.

---

### ➤ `jugar()`
Incrementa el nivel de felicidad en **20 puntos**.  
También se asegura de que no supere el límite de 100.

---

### ➤ `mostrarEstado()`
Devuelve un mensaje con la información actual de la mascota:

```python id="u3k2pn"
Nombre: Firulais, tu mascota es: Perro, el nivel de felicidad es: 80
# 💳 Sistema de Cuenta Bancaria en Python

Este proyecto implementa una clase en Python que simula el funcionamiento básico de una cuenta bancaria, permitiendo realizar operaciones como depósitos, retiros y consulta de saldo.

---

## 🚀 Descripción del proyecto

El programa utiliza programación orientada a objetos (POO) para modelar una cuenta bancaria. Cada cuenta tiene un titular, un número de cuenta y un saldo, sobre el cual se pueden realizar distintas operaciones.

El objetivo es aplicar conceptos fundamentales de programación como clases, métodos, validaciones y manipulación de datos.

---

## 🧱 Estructura del código

### 🔹 Clase `CuentaBancaria`

La clase representa una cuenta bancaria con los siguientes atributos:

- `titular`: Nombre del propietario de la cuenta  
- `numero_cuenta`: Número identificador de la cuenta  
- `saldo`: Cantidad de dinero disponible  

---

## ⚙️ Métodos implementados

### ➤ `depositar(cantidad)`
Permite agregar dinero al saldo de la cuenta.

```python id="p1x8ds"
self.saldo += cantidad