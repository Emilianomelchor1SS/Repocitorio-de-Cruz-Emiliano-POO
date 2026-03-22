from Aventurero import Aventurero
class jungla (Aventurero):
    def __init__(self, nombre, nivel, animal_companero):
        super().__init__(nombre, nivel)
        self.animal_companero = animal_companero
        
    def usar_habilidad(self):
        print(f"{self.nombre} se comunica con su compañero {self.animal_companero}! 🐾")