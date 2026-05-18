class Platillo :
    def __init__(self, nombre, precio):
        self.nombre = nombre
        self.precio = precio

    def mostrar_info(self):
        print(f"Nombre: {self.nombre}") # se usa f por que es una forma de formatear cadenas en Python, lo que permite insertar variables dentro de una cadena de texto de manera más legible y concisa.    
        print(f"Precio: {self.precio} pesos")
    def tipo_platillo(self):
        print( " platillo : desconocido")
        