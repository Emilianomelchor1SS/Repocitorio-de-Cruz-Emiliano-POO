from Vaca import Vaca   
from Creeper import Creeper
from Enderman import Enderman
from Mob import Mob
from Therian import Therian
if __name__ == "__main__":
    mobs = [
        Vaca("Bessie", 10),
        Creeper("Explosi", 20),
        Enderman("Tall Boi", 40),
        Therian("Furry", 30),
    ]
    for mob in mobs:
        mob.presentarse()
