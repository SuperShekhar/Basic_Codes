
f=open('sample.txt','r')  #sample.txt is opening the file and r means mode of opening(read mode)

#by default the mode is r if you didn't write anything .
                        
data=f.read()             #function to read 
print(data)

data = f.read(5)  #only read 5 characters : note you can only use read function one time
print(data)

data=f.readline()  #only first line
print(data)

data=f.readline()   #after using this for second time it will second line
print(data)

f.close()                  #close the file

#modes

f=open('sample.txt','w')  #w is the write mode

f.write("k xa khabar")

#when using write it will delete previous things. #
f.write('thik xa')

#it will be add in k xa khabar it will not delete it because the function is not closed yet

f= open('sample.txt','a')  #a is appending modes
  
f.write('i am appending')


with open('sample.txt') as f:
    f.read() 

    