#[for x in X]

"""
class MyNumbers:
    def __iter__(self):
        self.a = 1
        return self
    def __next__(self):
        x = self.a
        self.a += 1
        return x
"""

#creare un iteratore che restituisce i numeri da low ad high

class Serie:
    def __init__(self, low, high):
        self.low = low
        self.high = high
    def __iter__(self):
        if self.low > self.high:
            raise StopIteration
            
        return self
    def __next__(self):
        self.low = self.low +1
        return self.low

myS = Serie(1, 10)
for s in myS:
    print(s)

#oppurte con le list comprehention
#[print(s) for s in myS]