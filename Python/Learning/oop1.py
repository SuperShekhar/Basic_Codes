#Class

#pascal case= all word in uppercase for example EmployeeName , SchoolLife
#camel case= first word in lowercase and other capital ex: isFloat,isOrNumeric

class Homework():                  #the class should alwyas be in pascal case
    def printdata(self):            #self is a compulsory arguement but it can also take other arguements
        print(f'the physics homework is {self.physics}')
        print(f'the math homework is {self.math}')
        
 

note=Homework()    #note is an object of the clas Homwework
note.physics="lab report"  
note.math="all exercise of book"
note.printdata()

#nouns=class
#adjective=attributes
#verbs=methods


#Class Attributes

class Business():
    company="google"    #setting a attribute for the whole class

f1=Business()           #making a objective
print(f1.company)       #checking attribute of the object f1. (since the class attribute is fixed object attribute is also same)

Business.company="youtube"   #changing the class attributes
print(f1.company)      #printing new class attributes

#instance attributes

class new():
    salary=400

harry=new()
harry.salary=100

print(harry.salary)

#since salary attributes are in two places one in object and one in class
#so first it will look up to atttributes on the object
#if there isn't an attribute both in object and class it will throw error


#static method
#we need to use self every time so wecant use fuction like  previously 
#but there is a method for that just use static method

class Kxa():
    
    @staticmethod                    #@staticmethod is a decorator , is is also function
    def greet(name):
        print("Good morning",name)

Kxa.greet("shekhar")


#init

class Hello:
    def __init__(self):
        print("i am good")

shekhar=Hello()
        
#when we use init function we need not to print the function it will automatically print.

