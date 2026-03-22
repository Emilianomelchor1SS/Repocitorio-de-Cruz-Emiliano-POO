class Aventurero:
    def __init__(self, nombre, nivel):
        self.nombre = nombre
        self.nivel = nivel
    def presentarse(self):
        print(f"Hola, soy {self.nombre} y tengo nivel {self.nivel}")
    def usar_habilidad(self):
        print("¡Usando habilidad especial! aun no deinida")
        