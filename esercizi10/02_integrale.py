class Funzione:
    def eval(self,x): # funzione che restituisce f(x)
        pass

    def calcola_integrale(self, a, b, M):
        h = (b-a)/M
        sum = 0
        for i in range(M):
            sum = sum + self.eval(a + i*h)
        return h * sum

    #importante per il compitino

class Parabola(Funzione):
    def eval(self, x):
        return (x**2 - 2*x)

class Esponenziale(Funzione):
    def eval(self, x):
        return (2.7**(2*x))

class Iperbole(Funzione):
    def eval(self, x):
        return (x/(1 + x**2))

parabola1 = Parabola()
parabola1.calcola_integrale(0, 1, 250)
print("{}".format(parabola1.calcola_integrale(0, 1, 250)))

esponenziale1 = Esponenziale()
esponenziale1.calcola_integrale(-1.57, 3.14, 250)
print("{}".format(esponenziale1.calcola_integrale(-1.57, 3.14, 250)))

iperbole1 = Iperbole()
iperbole1.calcola_integrale(-2, 2, 250)
print("{}".format(iperbole1.calcola_integrale(-2, 2, 250)))


