from platillo import Platillo   
class gluten_free(Platillo):
    def __init__(self, nombre, precio, gluten):
            super().__init__(nombre, precio) 
            self.gluten = gluten    
    def tipo(self):
            print(f"Tipo: Sin Gluten — {self.gluten}")
