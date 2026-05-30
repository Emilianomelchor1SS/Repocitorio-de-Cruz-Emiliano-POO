###
## Excepciones

# Parte 1: Excepciones básicas 
print("="*50)
print("Parte 1: División con manejo de errores")
print("="*50)

# Creamos una lista de ejemplo
colores = ["rojo", "verde", "azul", "amarillo"]
print(f"Lista de colores: {colores} (indices 0, 1, 2, 3)")
# Intentamos acceder a un índice que no existe
try:
    indice = int(input("Ingrese el índice del color que desea acceder (0-3): "))
    print(f"El color seleccionado es: {colores[indice]}")
    
except ValueError as e:
    print(f"Error: Debe ingresar un número entero. Detalles del error: {e}")
    
except IndexError as e:
    print(f"Error: Índice fuera de rango. Detalles del error: {e}")
    print(f"Recuerde que los índices válidos son del 0 al {len(colores)-1}.")
    
finally:
    print("Operación de acceso a la lista finalizada.")