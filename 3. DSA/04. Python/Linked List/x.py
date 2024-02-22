class Demo:
    def check(self):
        return " Demo's Check "
    
    def display(self):
        print(self.check())

class DD(Demo):
    def check(self):
        return " Derived's Check "
    
Demo().display()
DD().display()