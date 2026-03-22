# 🧩 Práctica de Programación Orientada a Objetos en Python  
## Sistema de Aventureros

## 📌 Descripción

Este proyecto implementa un sistema de personajes utilizando Programación Orientada a Objetos (POO) en Python. Se hace uso del concepto de herencia para crear distintos tipos de aventureros con habilidades específicas.

Se define una clase base llamada `Aventurero`, de la cual derivan varias clases especializadas.

---

## 🧱 Estructura del Proyecto

Clases implementadas:

- `Aventurero` (Clase base)
- `Guerrero`
- `Arquero`
- `Mago`
- `Jungla`

Cada clase hereda atributos y métodos de `Aventurero`, pero redefine comportamientos propios.

---

## ⚙️ Ejecución del Programa

Ejemplo de instanciación de objetos:

```python
from Aventurero import Aventurero
from Guerrero import Guerrero   
from Arquero import arquero
from Mago import Mago   
from jungla import jungla

guerrero1 = Guerrero("Thorin", 5, "hacha de guerra")
arquero1 = arquero("Legolas", 4, "arco élfico")
mago1 = Mago("Gandalf", 10, "fuego")    
jungla1 = jungla("Tarzan", 3, "chimpancé")

guerrero1.presentarse()
guerrero1.usar_habilidad()
print("---")

arquero1.presentarse()
arquero1.usar_habilidad()
print("---")    

mago1.presentarse()
mago1.usar_habilidad()
print("---")

jungla1.presentarse()
jungla1.usar_habilidad()