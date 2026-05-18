from jugador import Jugador 
from competidor import Competidor
from Observador import Observador

competidor1 = Competidor("Juan", "12345", "Avanzado", 0, "Equipo A")
competidor2 = Competidor("Maria", "67890", "Intermedio", 0, "Equipo B")
observador1 = Observador("Carlos", "54321", "Principiante", 0, 0)
observador2 = Observador("Ana", "98765", "Principiante", 0, 0)  

competidor1.ganar_puntos(50)
competidor2.ganar_puntos(50)
competidor1.perder_puntos(20)   
competidor2.perder_puntos(10)
observador1.Ver_partida()
observador2.Ver_partida()


print("--------------------------------------------------")
    
print("Información del Competidor 1:")
competidor1.mostrar_informacion()

    
print("\nInformación del Competidor 2:")
competidor2.mostrar_informacion()

print("\nInformación del Observador:")
observador1.mostrar_informacion()


print("\nInformación del Observador:")
observador2.mostrar_informacion()
