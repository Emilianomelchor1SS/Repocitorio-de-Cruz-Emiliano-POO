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
        print(f"Nombre: {self.nombre},tu mascota es un: {self.tipo}, el nivel de felicidad de tu mascota es: {self.nivelFelicidad}, y tiene una edad de: {self.edad} años")
        # agrege la edad de la mascota en el mostrar estado aunqque nque se pedia en el enunciado, pero me parecio importante agregarlo para tener toda la informacion de la mascota en un solo lugar
    def esfeliz(self):
        if  self.nivelFelicidad > 70:
            print(True)
        else:            print(False)
mascota1 = mascota("Firulais", "therian", 5, 50)
mascota1.alimentar()
mascota1.jugar()
mascota1.mostrarEstado()
mascota1.esfeliz()
mascota2 = mascota("groomiel", "Gato", 3, 100)
mascota2.alimentar()
mascota2.jugar()
mascota2.jugar()
mascota2.jugar() 
mascota2.mostrarEstado()
mascota2.esfeliz()
