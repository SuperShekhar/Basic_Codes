student= {'name':'john', 'age':25,'courses':['math','compsci']}

# print(student['courses'])  #accessing the value of that key

# # print(student['phone']) #give error since it is not in dictionary

# print(student.get('name'))

# print(student.get('phone',"name not in dictionary")) #doesn't give error if it isn't there

# student['phone'] = '5555'  #add the key value in dictionary

# student['name'] = 'jane'  #change the value of key
# print(student)

# student.update({'name':'jane','age':26,'new':'nothint'})  #just adding updating at once
# print(student)

# del student['age']  #deleting the key
# print(student)

# age= student.pop('age') #removing the key age and storing its value in age variable

# print (student)

# print(age)

# print(len(student))  #length of the dictionary

print(student.values())  #values only

print(student.keys()) #keys only

print(student.items()) #keys values pair

for key in student:
    print(key)

for key,value in student.items():
    print(key,value)
