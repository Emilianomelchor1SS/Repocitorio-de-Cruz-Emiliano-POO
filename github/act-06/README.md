# 🧟 Práctica de Programación Orientada a Objetos en Python  
## Sistema de Mobs (Inspirado en videojuegos)

## 📌 Descripción

Este proyecto implementa un sistema de entidades (mobs) utilizando Programación Orientada a Objetos en Python.  
Se modelan distintos tipos de criaturas, cada una con características específicas como vida, sonido, tipo y forma de movimiento.

A través de una clase base (`Mob`) y varias clases derivadas, se simula el comportamiento de diferentes entidades dentro de un entorno tipo videojuego.

---

## 🧰 ¿Qué se usa en el proyecto?

- Lenguaje: Python  
- Programación Orientada a Objetos (POO)  
- Herencia  
- Polimorfismo  
- Listas para manejo de múltiples objetos  
- Métodos personalizados (`presentarse`)  
- Organización modular (archivos separados por clase)

---

## 🎯 ¿Cuál es la finalidad?

El objetivo del proyecto es comprender cómo estructurar sistemas más complejos utilizando herencia y polimorfismo, permitiendo representar múltiples tipos de objetos con comportamientos distintos a partir de una misma base.

Además, simula una lógica similar a la de videojuegos, donde múltiples entidades comparten características pero reaccionan de forma diferente.

---

## 🧱 Estructura del Proyecto

Clases implementadas:

- `Mob` (Clase base)
- `Vaca`
- `Creeper`
- `Enderman`
- `Therian`

Cada clase redefine atributos como:

- Sonido  
- Tipo (pasivo o agresivo)  
- Movimiento  

---

## ⚙️ Ejecución del Programa

```python
from Vaca import Vaca   
from Creeper import Creeper
from Enderman import Enderman
from Mob import Mob
from Therian import Therian

if __name__ == "__main__":
    mobs = [
        Vaca("Bessie", 10),
        Creeper("Explosi", 20),
        Enderman("Tall Boi", 40),
        Therian("Furry", 30),
    ]

    for mob in mobs:
        mob.presentarse()