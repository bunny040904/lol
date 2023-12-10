#Write a Python program to maintain club members, sort on roll numbers in ascending 
#order. Write function “Ternary_Search” to search whether particular student is member of club 
#or not. Ternary search is modified binary search that divides array into 3 halves instead of 
#two.

def accept():
    rollno=[]
    nostudent=int(input("enter the number of students:"))
    for i in range(nostudent):
        rollno.append(int(input("enter roll number of studnet:".format(i+1))))
    return rollno
def prints(rollno):
    for i in range(len(rollno)):
        print(rollno[i],sep="\n")
def insertion(rollno):
    for i in range(1,len(rollno)):
        key=rollno[i]
        j=i-1
        while j>=0 and key < rollno[j]:
            rollno[j+1]=rollno[j]
            j-=1
            rollno[j+1]=key
    return rollno
def ternary(roll,left,right,find):
    if(right>=left):
        mid1=left+(right-left)//3
        mid2=right-(right-left)//3
        if roll[mid1]==find:
            return mid1
        if roll[mid2]==find:
            return mid2
        if find<roll[mid1]:
            return ternary(roll,left,mid1-1,find)
        elif find>roll[mid2]:
            return ternary(roll,mid2+1,right,find)
        else:
            return ternary(roll,mid1+1,mid2-1,find)
    return -1
usort=[]
sort=[]
while(True):
    print(">>>>>>>>>menu<<<<<<<<<<<<<<<<<<<")
    print("1.accept student roll number \n")
    print("2.display the roll number of student \n")
    print("3.sort roll number from the list \n")
    print("4.perform ternary search \n")
    ch=int(input("enter your choice:"))
    if ch==1:
        usort=accept()
    elif ch==2:
        prints(usort)
    elif ch==3:
        sort=insertion(usort)
        prints(sort)
    elif ch==4:
        find=int(input("enter roll number:"))
        left=0
        right=len(sort)-1
        index=ternary(sort,left,right,find)
        if index!=-1:
            print("roll number",find,"found at position",index+1)
        else:
            print("roll number not found")
    elif ch==5:
        print("exit")
        break
