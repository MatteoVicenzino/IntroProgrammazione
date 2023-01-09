class MyPow():
    def __init__(self, a):
        self.a = a
        self.n = 1

    def __iter__(self):
        return self

    def __next__(self):
        if(self.n > self.a):
            raise StopIteration
        else:
            f_n = (3**(self.n +1))/self.n
            self.n += 1
            return f_n

risp = MyPow(3)

for s in risp:
    print(s)