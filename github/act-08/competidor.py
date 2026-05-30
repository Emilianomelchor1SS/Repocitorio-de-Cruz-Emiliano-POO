from jugador import Jugador
class Competidor(Jugador):
    def __init__(self, nombre, num_control, nivel, puntos, equipo):
        super().__init__(nombre, num_control, nivel, puntos,)  # Llama al constructor del padre   
        self.equipo = equipo    # Atributo nuevo SOLO de la hija