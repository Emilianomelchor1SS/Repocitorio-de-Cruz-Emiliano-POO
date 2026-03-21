class animal:
    def __init__(self,nombre,edad):
        self.nombre=nombre
        self.edad=edad
    def describrir(self):
        print(f"Soy un animal y me llamo {self.nombre} y tengo {self.edad} años")
def hablar(self):
        print("...")
#---------------------------------------------------
#clase hija
#`--------------------------------------------------
class perro(animal):
    def hablar(self):
        print(f"{self.nombre}: waf waf ")
class gato(animal):
    def hablar(self):
        print(f"{self.nombre}: neko noko")

# uso 
pakito=  perro("pakito", 3)
salem= gato("salem", 7)
#usar instancias
pakito.hablar()
salem.hablar()