import Functions  #we can import the module like this easily from same directory 

import Functions as func #we can import and can even change name of module

index = func.student('kxa','shekhar')  #we need to type module name when we import module

#when we import all the thing inside will be in this file

from Functions import student #it import the specific function from that module

index = student('kxa','shekhar')    # we need to only type function when we only import the function

from Functions import student , courses   #it is used to import the specific variable in that module

from Functions import * #it imports all functions and variable

import sys  #sys is a library from which in our device python check to imported module from

print(sys.path)  

#this is a way to add the folder or file in sys path

import sys

sys.path.append('file path')

#we can also do it by putting the file or folder you need to in the environment variables


import random #use to take random number or choice
courses = ['hisory','math','physics','Compsci']
random_courses = random.choice(courses)  #random.choices  choice the random things from the list
print(random_courses)



import math #it is used to make some math  calculation
rads = math.radians(90)
print(rads)


import datetime
import calendar 

today=datetime.date.today()
print(today)
print(calendar.isleap(2020))


import os  #operating system 
print(os.getcwd())   #working directory
print(os.__file__)   #the file in the directory

import antigravity #just come randon comic



