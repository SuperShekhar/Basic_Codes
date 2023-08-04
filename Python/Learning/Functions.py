def hello():   #it makes the function hello()
    print('hello function')  #it print the value of the function

hello() 

def hello():
    pass       #pass means do nothing go to another line without erro
print(hello())  #we are printing hello function

def hello_func():
    return "hello function"  #the return function return the value 
print(hello_func().upper())

def hell_function(greeting):  #here greeting is the arguements of the function
    return f"{greeting} , Shekhar"

print(hell_function("hi"))

def hell_function(greeting="hi"):  #here hi is the default arguements of the function
    return f"{greeting} , Shekhar"

def hell_function(greeting="hi",name='you'):   #using two arguement and setting their default value can even change it
    return f"{greeting} , {name}"

print(hell_function())  #printing the default value

print(hell_function("k xa",'shekhar')) #printing by using full capacity of funtins by giving the value to the arguements
  
def student (*args, **kwargs):   #args means set type of diferernt arguements more than one can be enter,* the comma packs it
    print(args)                   #kwargs means dictionary type of different arguements more than one can be enter ** the comma packs it
    print(kwargs)

student('math','art',name="John",age=22)

# we can even use dictionary and set or lists directly to functions
# and use * and ** while adding dictionary or set to unpack it and give value individually
 
courses=['match','cricket']
info = {'name':'john','age':23}

student(*courses,**info)