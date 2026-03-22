#clase padre
class Animal:
    #creamos el constructor de la clase
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
        
    def describir(self):
        print(f"soy {self.nombre} y tengo {self.edad} años")
        
    def hablar(self):
        print("...")
        