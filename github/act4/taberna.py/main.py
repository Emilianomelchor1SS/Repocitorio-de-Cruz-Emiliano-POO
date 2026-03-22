from Aventurero import Aventurero
from Guerrero import Guerrero   
from Arquero import arquero
from Mago import Mago   
from jungla import jungla
guerrero1 = Guerrero("Thorin", 5, "hacha de guerra")
arquero1 = arquero("Legolas", 4, "arco élfico")
mago1 = Mago("Gandalf", 10, "fuego")    
jungla1 = jungla("Tarzan", 3, "chimpancé")

guerrero1.presentarse()
guerrero1.usar_habilidad()
print("---")
arquero1.presentarse()
arquero1.usar_habilidad()
print("---")    
mago1.presentarse()
mago1.usar_habilidad()
print("---")
jungla1.presentarse()
jungla1.usar_habilidad()

