from jugador import Jugador
class Observador(Jugador):
    def __init__(self, nombre, num_control, nivel, puntos,partidas_observadas):
        super().__init__(nombre, num_control, nivel, puntos)  # Llama al constructor del padre
        self.partidas_observadas = partidas_observadas    # Atributo nuevo SOLO de la hija
    def Ver_partida(self):
        self.partidas_observadas += 1
        self.ganar_puntos(5)  # Gana 5 puntos por cada partida observada
    def mostrar_informacion(self):
        super().mostrar_informacion()  # Llama al método del padre para mostrar la información básica
        print(f"Partidas Observadas: {self.partidas_observadas}")