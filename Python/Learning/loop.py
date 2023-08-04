nums = [1,2,3,4,5]

for num in nums:   #loops the num untill end of list
    print(num)

for num in nums:
    if num==3:
        print('found')
        break          # if the condition is met and break is used it stops the loop and get outside of loop
    print(num)

for num in nums:
    if num==3:
        print('found') # if the condition is meet and continue is used it ignores what is it in belows and again loop around
        continue              
    print(num)

for num in nums:
    for letter in 'abc':
        print(num,letter)

for i in range(10):   #it loops through the range (0,10) it ignores 10
    print(i)

for i in range(1,10): #it starts from 1
    print(i)



#while loop
x=0
while x<10:    #it doesn't stop until the condition is false

    print(x)
    x += 1

x=0
while x<10:
    x+=1
    if x==5:
        continue
    print(x)
    
