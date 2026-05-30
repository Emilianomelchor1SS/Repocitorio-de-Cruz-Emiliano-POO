archivo = open("github/act-9/Texto.txt", "w", encoding="utf-8")
for i in range(1024**2):
    archivo.write("m")
archivo.close()
