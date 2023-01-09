class Funzione:
    def eval(self, x):
        pass

    def calcola_integrale(self, a, b, M):
        h = (b-a)/M
        sum = 0
        for i in range(0, M):
            sum = sum + self.eval(a + i * h)
        return (sum * h)

class Quadrata(Funzione):
    def eval(self, x):
        return((x**2) - x*2)

class Esponenziale(Funzione):
    def eval(self, x):
        return(2.71** (x*2))

class Fratta(Funzione):
    def eval(self, x):
        return(x/(1 + x**2))



quadrata = Quadrata()
print('{}'.format(quadrata.calcola_integrale(0.0, 1.0, 99)))

esponenziale = Esponenziale()
print('{}'.format(esponenziale.calcola_integrale(-1.57, 3.14, 99)))

fratta = Fratta()
print('{}'.format(fratta.calcola_integrale(-2.0, 2.0, 99)))