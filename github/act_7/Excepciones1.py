###
## Excepciones

# Parte 1: Excepciones básicas
print("="*50)
print("Parte 1: División con manejo de errores")
print("="*50)

try:
    a = int(input("Ingrese el numerador: "))
    b = int(input("Ingrese el denominador: "))
    resultado = a / b

except ValueError:
    print("Error: Debe ingresar un número entero no una letra.")
except ZeroDivisionError:
    print("Error: No se puede dividir por cero.")
    
else:
    print(f"El resultado de {a} dividido por {b} es: {resultado}")

finally:
    print("Operación de división finalizada.")