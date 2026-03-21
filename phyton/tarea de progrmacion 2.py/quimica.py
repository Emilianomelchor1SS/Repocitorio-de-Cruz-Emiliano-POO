c=3.00*10**8 #velocidad de la luz
e=1.602*10**-19 #carga del electron
h=6.626*10**-34
while True:
    Ancho_onda=float(input("Ingrese el valor del ancho de onda: "))
    #frecuencia = velocidad de la luz / ancho de onda
    if Ancho_onda <= 0: 
        print("Error: el ancho de onda debe ser mayor que cero.")
    else:
        frecuencia=c/Ancho_onda
        print("La frecuencia de la onda es: ",frecuencia, "Hz")

        #energia = constante de planck * frecuencia
        energiaj=h*frecuencia
        print("La energia de la onda es: ",energiaj, "Joules")

        #energia en electronvoltios = energia en joules / carga del electron
        electronvoltios=energiaj/e
        print("La energia de la onda en electronvoltios es: ",electronvoltios, "eV")

        #para la localicacion de la ondaColor	Longitud de onda (nm)
        #🟣 Violeta	380 – 450 nm
        #🔵 Azul	450 – 495 nm
        #🟢 Verde	495 – 570 nm
        #🟡 Amarillo	570 – 590 nm
        #🟠 Naranja	590 – 620 nm
        #🔴 Rojo	620 – 750 nm
        if Ancho_onda<300 or Ancho_onda>750:
            print("No es un color visible")
        if Ancho_onda >= 380 and Ancho_onda <= 450:
            print("La onda es de color Violeta")
        elif Ancho_onda > 450 and Ancho_onda <= 495:
            print("La onda es de color Azul")   
        elif Ancho_onda > 495 and Ancho_onda <= 570:
            print("La onda es de color Verde")
        elif Ancho_onda > 570 and Ancho_onda <= 590:
            print("La onda es de color Amarillo")
        elif Ancho_onda > 590 and Ancho_onda <= 620:
            print("La onda es de color Naranja")
        elif Ancho_onda > 620 and Ancho_onda <= 750:
            print("La onda es de color Rojo")

