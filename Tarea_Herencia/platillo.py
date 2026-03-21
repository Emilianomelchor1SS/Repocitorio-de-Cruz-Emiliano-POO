class Platillo :
    def __init__(self, nombre, precio):
        self.nombre = nombre
        self.precio = precio

    def mostrar_info(self):
        print(f"Nombre: {self.nombre}")
        print(f"Precio: {self.precio} pesos")
    def tipo_platillo(self):
        print( " platillo : desconocido")
        