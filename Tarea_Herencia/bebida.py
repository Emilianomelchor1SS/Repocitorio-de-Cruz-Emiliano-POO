from platillo import Platillo
class tipo_bebida(Platillo):
    def __init__(self, nombre, precio, temperatura):
            super().__init__(nombre, precio) 
            self.temperatura = temperatura    
    def tipo(self):
            print(f"Tipo: Bebida — {self.temperatura}")  
