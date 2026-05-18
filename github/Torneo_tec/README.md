
# Sistema de Gestión de Torneo — “Torneo_tec”

## Descripción del Proyecto

“Torneo_tec” es una aplicación desarrollada en Python cuyo propósito es automatizar y administrar el control de participantes y observadores dentro de un torneo académico o tecnológico.

El sistema fue diseñado utilizando el paradigma de Programación Orientada a Objetos (POO), permitiendo una administración estructurada de usuarios, así como el seguimiento dinámico de estadísticas y puntuaciones obtenidas durante el desarrollo del torneo.

La aplicación busca optimizar el registro, monitoreo y control de desempeño de los participantes mediante una lógica interna segura y adaptable.

---

## Objetivo del Proyecto

Desarrollar un sistema capaz de gestionar participantes de un torneo de manera eficiente, permitiendo:

* Registrar usuarios y observadores.
* Controlar puntuaciones en tiempo real.
* Mantener un historial dinámico de desempeño.
* Validar datos para evitar inconsistencias en el sistema.

---

## Características Principales

### Gestión de Perfiles

Registro estructurado de usuarios mediante atributos como:

* Nombre
* Número de control
* Nivel de experiencia
* Puntuación acumulada

---

### Control de Puntuación Dinámico

Implementación de lógica interna que permite:

* Sumar puntos.
* Restar puntos.
* Actualizar estadísticas automáticamente.
* Mantener acumulación progresiva de resultados.

---

### Historial Inteligente

El sistema incorpora un mecanismo de visualización adaptativa donde:

* Los mensajes de “Puntos Ganados” o “Puntos Perdidos” únicamente aparecen cuando el usuario ha tenido modificaciones reales en su puntuación.
* Se evita mostrar información innecesaria, manteniendo una interfaz más limpia y organizada.

---

### Validación de Datos

Se implementan restricciones de seguridad para evitar errores lógicos, incluyendo:

* Prohibición de puntuaciones negativas.
* Límite mínimo de puntaje igual a 0.
* Protección ante modificaciones inválidas.

---

## Tecnologías Utilizadas

* Python 3
* Programación Orientada a Objetos (POO)

---

## Estructura del Proyecto

```bash
Torneo_tec/
│
├── main.py
├── participantes.py
├── observadores.py
├── torneo.py
└── README.md
```

---

## Conceptos Aplicados

Durante el desarrollo del proyecto se aplicaron conceptos fundamentales de:

* Clases y objetos
* Encapsulamiento
* Métodos
* Constructores
* Validación de datos
* Modularización
* Manejo de atributos dinámicos

---

## Ejemplo de Funcionamiento

```python
participante.sumar_puntos(50)
participante.restar_puntos(20)

print(participante.mostrar_info())
```

Salida esperada:

```bash
Nombre: Emiliano
Puntuación: 30
Puntos Ganados: 50
Puntos Perdidos: 20
```

---

## Finalidad del Proyecto

Este proyecto tiene como finalidad reforzar el aprendizaje de Programación Orientada a Objetos mediante la creación de un sistema funcional aplicado a un contexto real de administración y control de torneos.

Además, busca demostrar el uso práctico de estructuras de control, validaciones y organización modular en Python.

---

## Posibles Mejoras Futuras

* Interfaz gráfica.
* Persistencia de datos con archivos o bases de datos.
* Sistema de autenticación.
* Ranking automático.
* Exportación de resultados.
* Historial completo de partidas.

---

## Autor

Desarrollado por Emiliano Alejandro Cruz Melchor.
