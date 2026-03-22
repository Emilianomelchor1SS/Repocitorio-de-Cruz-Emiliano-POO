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

