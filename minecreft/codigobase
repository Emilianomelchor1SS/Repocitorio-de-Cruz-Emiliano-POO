# Importa el módulo para clases abstractas
from abc import ABC, abstractmethod

class Mob(ABC):
    """Clase abstracta base para todos los mobs."""

    def __init__(self, nombre: str, vida: int):
        self.nombre = nombre
        self.vida   = vida

    # Métodos ABSTRACTOS: cada mob DEBE implementarlos

    @abstractmethod
    def hacer_sonido(self) -> str:
        """Retorna el sonido característico del mob."""
        pass

    @abstractmethod
    def comportamiento(self) -> str:
        """Retorna 'pasivo' o 'agresivo'."""
        pass

    @abstractmethod
    def moverse(self) -> str:
        """Describe cómo se mueve el mob."""
        pass

    # Método CONCRETO: igual para todos los mobs

    def presentarse(self):
        print(f"=== {self.nombre} ===")
        print(f"❤️  Vida       : {self.vida} HP")
        print(f"🔊  Sonido     : {self.hacer_sonido()}")
        print(f"⚔️  Tipo       : {self.comportamiento()}")
        print(f"🏃  Movimiento : {self.moverse()}")
        print()


# ✏️  TU TURNO: implementa las 3 subclases

class Vaca(Mob):
    """Mob pasivo, suena 'Muuuu', camina lento."""
    # TODO: implementa hacer_sonido, comportamiento, moverse
    pass

class Creeper(Mob):
    """Mob agresivo, suena '...Ssssss', corre hacia el jugador."""
    # TODO: implementa hacer_sonido, comportamiento, moverse
    pass

class Enderman(Mob):
    """Mob neutral, sonido distorsionado, se teletransporta."""
    # TODO: implementa hacer_sonido, comportamiento, moverse
    pass


# 🚀 PRUEBA tu código aquí
if __name__ == "__main__":
    mobs = [
        Vaca("Bessie", 10),
        Creeper("Explosi", 20),
        Enderman("Tall Boi", 40),
    ]
    for mob in mobs:
        mob.presentarse()