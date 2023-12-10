#Write a Python program to store first year percentage of students in array. Write function 
#for sorting array of floating point numbers in ascending order using a) Selection Sort b) Bubble 
#sort and display top five scores.

def selectionsort(marks):
    for i in range(len(marks)):
        min=i
        for j in range(i+1,len(marks)):
            if marks[j]<marks[min]:
                min=j
                temp=marks[i]
                marks[i]=marks[min]
                marks[min]=temp
    print("marks of student after perforimg selection sort:")
    for i in range(len(marks)):
        print(marks[i])
def bubble(marks):
    n=len(marks)
    for i in range(n-1):
        for j in range(0,n-i-1):
            if marks[j]>marks[j+1]:
                temp=marks[j]
                marks[j]=marks[j+1]
                marks[j+1]=temp
    print("marks of student after sorting:")
    for i in range(len(marks)):
        print(marks[i])
def five(marks):
    print("top five marks are")
    print("top",len(marks),"marks are:")
    print(*marks[::-1],sep="\n")
marks=[]
n=int(input("enter number of student"))
print("enter marks for",n,"students")
for i in range(0,n):
    ele=int(input())
    marks.append(ele)
print("you entered following scores:")
print(marks)
while(True):
    print("\n 1.selection sort")
    print("\n 2.bubble sort")
    print("\n 3.top five marks")
    print("\n 4.exit")
    print("\n enter your choice:")
    choice=int(input())
    if(choice==1):
        selectionsort(marks)
    elif(choice==2):
        bubble(marks)
    if(choice==3):
        five(marks)
    elif(choice==4):
        print("exit")
        break
