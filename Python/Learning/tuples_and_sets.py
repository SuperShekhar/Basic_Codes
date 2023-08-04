tuple1 = ('history','math','physics')

tuple2 = tuple1

tuple1[0] = "science"  #this isn't possible in tuple becaus they are immutabe

print (tuple1)

#can't use method that change the tuple but we can use other method as lists like count etc. or can see in google

#Sets

cs_courses = {'history','math','physics','compsci'}  #doesn't print in order

print(cs_courses)

print('math' in cs_courses)   #gives the boolean value if it is in list or not

art_courses = {'history','education','art'}

print(cs_courses.union(art_courses))  #all elements of sets

print(cs_courses.intersection(art_courses)) #common elements of sets

#empty list
empty_list=[]
empty_list=list()

#empty tuple
empty_tuple={}
empty_tuple=()

#empty set
empty_set= set()

#Note
empty_set= ()  #this is not a empty set


