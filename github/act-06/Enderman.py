from Mob import Mob
class Enderman(Mob):
        def __init__(self, nombre: str, vida: int):
            super().__init__(nombre, vida)

        def hacer_sonido(self) -> str:
            return "brrrrr bebsitaaaaa"

        def comportamiento(self) -> str:
            return "agresivo"

        def moverse(self) -> str:
            return "corre hacia el jugador"
        
