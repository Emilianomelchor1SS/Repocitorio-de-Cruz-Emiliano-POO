class Estudiante: 
    def __init__(self, nombre, edad, carrera):
        self.nombre=nombre
        self.edad=edad
        self.carrera=carrera
        self.calificaciones=[]
        #metodo para asignar calificiones los estudiantes.
    def agregar_calificacion(self, calificacion):
       self.calificaciones.append(calificacion)
       #appen significa agrregar.
    def getpromedio(self):
        if len(self.calificaciones) ==0:# len lee los elementos de la lista, si es menor a 2 no se puede calcular el promedio.
            return 
        return sum(self.calificaciones) / len(self.calificaciones)
      #mostrarprtomedio es para mostrar el promedio de las calificaciones.
    def mostrarinformaciondelusuario( self):
     return f"Hola soy { self.nombre}, y tengo {self.edad}, y estudio {self.carrera}" 
 
 #crear un objeto de la clase estudiante.
estudiante1 = Estudiante("Juan", 20, "Ingenieria en Sistemas")
estudiante2 = Estudiante("Maria", 22, "Electromecanica")
estudiante3 = Estudiante("Pedro", 19, "Medicina")
print(estudiante1.mostrarinformaciondelusuario())
print(estudiante1.getpromedio())
print( "--------------------------------------------------")
print(estudiante2.mostrarinformaciondelusuario())
print(estudiante2.getpromedio())
print( "--------------------------------------------------")
print(estudiante3.mostrarinformaciondelusuario())   
print(estudiante3.getpromedio())    


 