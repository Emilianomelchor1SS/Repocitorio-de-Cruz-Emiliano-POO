from Aventurero import Aventurero
class Mago(Aventurero):
    def __init__(self, nombre, nivel, elemento):
        super().__init__(nombre, nivel)
        self.elemento = elemento
        
    def usar_habilidad(self):
        print(f"{self.nombre} lanza un hechizo de {self.elemento}! ✨")