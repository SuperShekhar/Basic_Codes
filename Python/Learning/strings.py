#string 
''' we use string for textual data . we always put them under quotes '''

#String methods

message = 'Helo world'

print(len(message)) #to get length of string

print(message[2]) #to get the 2 index word

print(message[0:5]) #to get word from 0 t0 4 index it doesn't count 5 index

print(message.upper())  #to make all letter uppercase

print(message.count("d")) #to count the specified letter or word in the variable

print(message.replace("Helo","shekhar"))  #replace the word with another word

#joining the strings

greeting = 'hello'

name = 'Michael'

print(greeting + " " + "," + " " +name )  #use to join only on data type

message = f'{greeting}, {name}. Welcome' #joining the two strings , basically use to join diff data types

#we can even use string methods like .upper or .lower inside the variable in f string

print(message)

#we can even use comma

print(greeting,name,"welcome")  #it is mainly use to join different data types,comma automatically give spaces


#Just some basic way to learn more about string methods

print(dir(name))  #show methods all related to it  "here name is the variable we typed previously"

print(help(str))  #show string methods and give description about it 

print(help(str.lower()))  #show what that specific string methods does