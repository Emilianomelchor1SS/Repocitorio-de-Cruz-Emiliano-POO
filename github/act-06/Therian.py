from Mob import Mob
class Therian(Mob):
    def __init__(self, nombre: str, vida: int):
        super().__init__(nombre, vida)    
    def hacer_sonido(self) -> str:
        return "Grrrrr"
    
    def comportamiento(self) -> str:
        return "agresivo"

    def moverse(self) -> str:
        return "corre hacia el jugador y lo mea"

