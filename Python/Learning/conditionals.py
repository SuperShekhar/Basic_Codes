#conditionals

#not equal : !=
#equal : ==
#less than : <
#greater than : >
#object identity: is

language='python'


if language=="python":
    print('conditionals was True')

elif language== "java":
    print('language is java')

elif language == ('java script'):
    print('language is java script')

else :
    print('no match')

#and : for both
#or : for only one
#not : show opposite

user = "admin"
logged_in = False

if user=="admin" and logged_in:
    print('admin page')
else:
    print('bad creds')

if not logged_in:     # logged in is false above but after not it will be true
    print('please log in')
else:
    print('welcome')

a=[1,2,3]

b=[1,2,3]

print(a==b) #print if the value are same or not

print(a is b) #print if the id is same or not

print(id(a))    #checks the id of the variable
print(id(b))

a=b
print(a is b)  #its now show true because id is same because of a=b

condition = False

if condition:
    print('evaluated to true')
else:
    print('evaluated to false')

""" if condition = none
                   zero
                   empty dictionary,set,tupple
If the conditions are like that it also acts as false"""