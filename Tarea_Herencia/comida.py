from platillo  import Platillo
class tipo_platillo(Platillo):
    def __init__(self, nombre, precio, categoria):
            super().__init__(nombre, precio)  # Llama al constructor del padre
            self.categoria = categoria        # Atributo nuevo SOLO de la hija

    def tipo(self):
            print(f"Tipo: Comida — {self.categoria}")
