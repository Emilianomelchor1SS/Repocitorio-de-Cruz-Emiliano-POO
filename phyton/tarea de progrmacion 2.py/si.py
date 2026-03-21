class mascota:
    def __init__(self, nombre, tipo, edad, nivelFelicidad):
        self.nombre = nombre
        self.tipo = tipo
        self.edad = edad
        self.nivelFelicidad = nivelFelicidad
    def alimentar(self):    
        self.nivelFelicidad += 10
        if self.nivelFelicidad > 100:
            self.nivelFelicidad = 100
    def jugar(self):    
        self.nivelFelicidad += 20
        if self.nivelFelicidad > 100:
            self.nivelFelicidad = 100
    def mostrarEstado(self):
        return f"Nombre: {self.nombre},tu mascota es: {self.tipo}, el nivel de felicidad de tu mascota es: {self.nivelFelicidad}"
    def esfeliz(self):
        if  self.nivelFelicidad > 70:
            return bool(True)
        else:            return bool(False)
mascota1 = mascota("Firulais", "Perro", 5, 50)
mascota1.alimentar()
mascota1.jugar()
mascota1.mostrarEstado()
mascota1.esfeliz()