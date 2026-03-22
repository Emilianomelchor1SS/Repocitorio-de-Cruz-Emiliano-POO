from Aventurero import Aventurero
class arquero(Aventurero):
    def __init__(self, nombre, nivel, tipo_arco):
        super().__init__(nombre, nivel)
        self.tipo_arco = tipo_arco
        
    def usar_habilidad(self):
        print(f"{self.nombre} dispara una flecha con su {self.tipo_arco}! 🏹")