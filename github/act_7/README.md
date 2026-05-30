Práctica 07. Programación Orientada a Objetos en Python
Control y Gestión de Excepciones

En esta actividad se presenta un ejemplo funcional sobre el manejo de errores en Python mediante el uso de las estructuras try, except, else y finally. Estas herramientas permiten controlar situaciones inesperadas dentro del programa y evitar que la ejecución termine de forma abrupta.

Parte 1: Operación de división con validación de errores

El siguiente código solicita al usuario dos valores numéricos para efectuar una división. Además, incorpora mecanismos de validación que detectan entradas incorrectas y errores matemáticos comunes.

print("=" * 50)
print("Parte 1: Operación de división segura")
print("=" * 50)

try:
    # Solicitud y conversión de datos ingresados por el usuario
    numerador = int(input("Ingrese el valor del numerador: "))
    denominador = int(input("Ingrese el valor del denominador: "))
    
    # Realización de la operación
    division = numerador / denominador

except ValueError:
    # Error generado cuando la entrada no es numérica
    print("Error: Solo se permiten números enteros.")

except ZeroDivisionError:
    # Error generado al intentar dividir entre cero
    print("Error: No es posible realizar divisiones entre cero.")

else:
    # Bloque que se ejecuta si no ocurre ningún error
    print(f"El resultado de la división es: {division}")

finally:
    # Bloque que se ejecuta siempre
    print("Proceso terminado.")
Explicación General
try: Contiene el código que puede generar una excepción.
except: Captura y maneja errores específicos.
else: Se ejecuta únicamente si no ocurrió ninguna excepción.
finally: Siempre se ejecuta, independientemente del resultado del programa.

Este tipo de manejo de excepciones permite desarrollar programas más seguros, organizados y resistentes ante errores provocados por el usuario o por operaciones inválidas.