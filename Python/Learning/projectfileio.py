def game():
    return 80

a=game()

file=open('sample.txt')
data=file.read()



if a>int(data):
    file= open('sample.txt','w')
    file.write(str(a))
    file.close
