#Write a Python program to store marks scored in subject “Fundamental of Data Structure” 
#by N students in the class. Write functions to compute following: 
#a) The average score of class
#b) Highest score and lowest score of class
#c) Count of students who were absent for the test
#d) Display mark with highest frequency


marks=[]
def studget():
    print("enter no of student in se class:")
    n=int(input())
    global marks
    for i in range(n):
        print("enter the marks:")
        m=int(input())
        marks.append(m)
    print(marks)
def avgmarks(marks):
    sum=0
    cnt=0
    for i in range(len(marks)):
        if marks[i]!=-1:
            sum=sum+marks[i]
            cnt+=1
    print("total marks=",sum)
    print("cnt=",cnt)
    print("avg in float=",sum/cnt)
    print("avg in integer=",sum//cnt)
def highlow(marks):
    temp=marks[0]
    for i in range(len(marks)):
        if temp<marks[i]:
            temp=marks[i]
    print("highest marks=",temp)
    temp=marks[0]
    for i in range(len(marks)):
        if marks[i]!=-1:
            if temp>marks[i]:
                temp=marks[i]
    print("lowest marks=",temp)
def countabs(marks):
    cnt=0
    for i in range(len(marks)):
        if(marks[i]==-1):
            cnt+=1
    print("no of absent students=",cnt)
def highfrq(marks):
    freq=0
    for i in range(len(marks)):
        if(marks!=-1):
            m=marks.count(marks[i])
        if(m>freq):
            freq=m
            res=marks[i]
    print("marks with highest frequency:",res)
    print("count=",freq)
            
flag=1
while flag==1:
    print("1.accept")
    print("2.the avg score of the class")
    print("3.highest and lowest score of the class")
    print("4.count of student who are absent for the test")
    print("5.display marks with highest score")
    print("enter choice(1 to 5):")
    choice=int(input())
    if choice==1:
        studget()
    elif(choice==2):
        avgmarks(marks)
    elif choice==3:
        highlow(marks)
    elif choice==4:
        countabs(marks)
    elif choice==5:
        highfrq(marks)
    elif choice==6:
        flag=0
        break
