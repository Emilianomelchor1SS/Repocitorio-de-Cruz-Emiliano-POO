class CuentaBancaria:
    def __init__(self, titular, numero_cuenta, saldo):
        self.titular=titular
        self.numero_cuenta = numero_cuenta
        self.saldo = saldo 
        
    def depositar(self, cantidad):
        self.saldo += cantidad
        
    def retirar(self, retiro):
        if retiro >=   self.saldo:
            print("Fondos insuficientes")
            return 0
      
        self.saldo -= retiro
    def mostrar_saldo(self):
        return f"El saldo actual es de {self.saldo} pesos"
      
    def mostrar_informacion(self):
        return f" Hola, {self.titular},con numero de cuenta { self. numero_cuenta}, tu saldo es de {self.saldo} pesos"

cuenta1 = CuentaBancaria("Juan", "123456789", 1000)
cuenta1.retirar(500)
cuenta2 = CuentaBancaria("Maria", "987654321", 500)
cuenta2.depositar(200)
cuenta2.retirar(100)

print(cuenta2.mostrar_informacion())
print(cuenta2.mostrar_saldo())        
print(cuenta1.mostrar_informacion())
print(cuenta1.mostrar_saldo())
