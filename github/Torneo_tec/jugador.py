class jugador:
    def __init__(self, nombre, num_control,nivel, puntos):
        self.nombre = nombre
        self.num_control = num_control
        self.nivel = nivel
        self.puntos = 0
    def ganar_puntos(self, puntos_ganados):
        self.puntos += puntos_ganados\
        
    def perder_puntos(self, puntos_perdidos):
        self.puntos -= puntos_perdidos
        if self.puntos < 0:
            self.puntos = 0
    def mostrar_informacion(self):
        print(f"Nombre: {self.nombre}")
        print(f"Número de Control: {self.num_control}")
        print(f"Nivel: {self.nivel}")
        print(f"Puntos: {self.puntos}") |