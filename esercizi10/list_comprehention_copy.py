def isprime(x):
    for i in range(2, x-1):
        if(x % i == 0):
            return False
    return True

def test():
    if isprime() != True:
        raise Exception('errore')

class Primi:
    def __init__(self, high):
        self.current = 1
        self.high = high
        self.count = 0
        
    def __iter__(self):
        print('ciao')#non entra mai nell'iter
        if isprime(self.current) == True:
            print('ciao')
            self.count = self.count + 1
            return self
        
    def __next__(self):
        print(self.count)
        if self.count > self.high:
            raise StopIteration 
        else:
            self.current += 1
            return self.current - 1

        """
        while self.count < self.high:
            self.current += 1
            return self.current - 1
        raise StopIteration 

        """

myS = Primi(100)
for s in myS:
    print(s)

#test()


#oppurte con le list comprehention
#[print(s) for s in myS]