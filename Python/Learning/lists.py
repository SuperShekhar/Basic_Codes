course = ["history","math", "physics","compsci"]

# course[3]= "science" #to change the value of the specified index

# print(course)

# print(len(course)) #use to give length of set

# print(course[0]) #use to access that element

# print(course[-1]) #last element

# print(course[0:2]) #from 0 index to 1 , doesn't include the 2 index

# print(course[1:])  # from 1 index to list

# print(course[:3])  #from start to 2nd index

# # list methods

# course.insert(0,"art")  #insert art in 0th index

# print(course)

# courses2= ['art',"education"]

# course.extend(courses2)  #the elements are extended in course1
 
# course.append(courses2)  #add the whole list instead of individual elements

# print(course)

course.pop(2)  #print after removing the last element

print(course)

# popped=course.pop() #print the removing items

# print(popped)

# course.remove("education") #remove the name education from courses
 
# print(course)  




# course.reverse() #reverse the list

# print(course)

# course.sort()  #sort the list in order

# print(course)


# num=[1,5,3,4,6,7]

# num.sort()  #sort the list in ascending order

# print(num)

# num.sort(reverse=True)  #sort the list in descending order

# print(num)

# sorted_course= sorted(course)  #sort the list without altering the original list

# print (sorted_course)

# print(course)

# print(min(num))   #take the minimum no in the list

# print(max(num))  #take the maximum no in the list

# print(sum(num))  #sum of all the no of list


# print(course.index('history'))  #gives the index

 

# #some tips

# print('math' in course)   #prints the boolean value

# for item in course:     #print the every element in the list in order
#     print(item)

# for index , course in  enumerate(course):   #print the every element in list with its index
#     print(index,course)

# for index , course in  enumerate(course,start=1):  #print the every element with index starting from 1
#     print(index,course)

# course_str = ',  '.join(course)     #take out individual element and separated with comma
# print(course_str)

# new= course_str.split(', ')      #make the strings separated with comma in a list

# print(new)



