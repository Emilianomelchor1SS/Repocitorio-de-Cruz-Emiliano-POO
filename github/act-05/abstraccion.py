from abc import ABC, abstractmethod
# La clase abstracta
class Animal(ABC):

# El método abstracto
    @abstractmethod
    def hablar(self):
        pass

# Clases en especifico
class Perro(Animal):
    def hablar(self):
        return "Guau!"
class Gato(Animal):
    def hablar(self):
        return "Miau!"
    
# Uso de las clases
perro = Perro()
gato = Gato()
print(perro.hablar())
print(gato.hablar())