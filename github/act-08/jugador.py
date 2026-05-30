class Jugador:
    def __init__(self, nombre, num_control, nivel, puntos=0):
        self.nombre = nombre
        self.num_control = num_control
        self.nivel = nivel
        self.puntos = puntos
        # Creamos estas variables para "recordar" si ganó o perdió puntos
        self.puntos_ganados = 0
        self.puntos_perdidos = 0

    def ganar_puntos(self, puntos_ganados):
        # Sumamos al total de puntos
        self.puntos += puntos_ganados
        # Registramos cuántos puntos se ganaron en total
        self.puntos_ganados += puntos_ganados
        
    def perder_puntos(self, puntos_perdidos):
        # Restamos al total de puntos
        self.puntos -= puntos_perdidos
        if self.puntos < 0:
            self.puntos = 0
        # Registramos cuántos puntos se perdieron en total
        self.puntos_perdidos += puntos_perdidos

    def mostrar_informacion(self):
        print("--- Información del Observador ---")
        print(f"Nombre: {self.nombre}")
        print(f"Número de Control: {self.num_control}")
        print(f"Nivel: {self.nivel}")
        print(f"Puntos: {self.puntos}")
        
        # SI el jugador ha ganado puntos (es decir, es mayor a 0), se muestra
        if self.puntos_ganados > 0:
            print(f"Puntos Ganados: {self.puntos_ganados}")
            
        # SI el jugador ha perdido puntos (es decir, es mayor a 0), se muestra
        if self.puntos_perdidos > 0:
            print(f"Puntos Perdidos: {self.puntos_perdidos}")
        print("-----------------------------------\n")