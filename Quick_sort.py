#Write a Python program to store first year percentage of students in array. Write function 
#for sorting array of floating point numbers in ascending order using quick sort and display top 
#five scores.

def inputp():
    per=[]
    nostudent=int(input("enter number of student:"))
    for i in range(nostudent):
        per.append(float(input("enter the percentage of student:")))
    return per
def printp(per):
    for i in range(len(per)):
        print(per[i],sep="\n")
def partition(per,start,end):
    pivot=per[start]
    lower=start
    upper=end
    while True:
        while lower<=upper and per[lower]<=pivot:
            lower+=1
        while lower<=upper and per[upper]>=pivot:
            upper-=1
        if lower<=upper:
           temp=per[lower]
           per[lower]=per[upper]
           per[upper]=temp
        else:
            break
    temp=per[start]
    per[start]=per[upper]
    per[upper]=temp
    return upper
def quick(per,start,end):
    while start < end:
        part=partition(per,start,end)
        quick(per,start,part-1)
        quick(per,part+1,end)
        return per
def tfive(per):
    print("top five percentage are:")
    if len(per)<5:
        start,stop=len(per)-1,-1
    else:
        start,stop=len(per)-1,len(per)-6
    for i in range(start,stop,-1):
        print(per[i],sep="\n")
usort=[]
sort=[]
while True:
    print("1.accept the percentage of student:")
    print("2.display the percentage of student:")
    print("3.perform the quick sort:")
    print("4.top five score:")
    print("5.exit")
    ch=int(input("enter your choice(from 1 to 4):"))
    if ch==1:
        usort=inputp()
    elif ch==2:
        printp(usort)
    elif ch==3:
        sort=quick(usort,0,len(usort)-1)
        printp(sort)
    elif ch==4:
        tfive(sort)
    elif ch==5:
        print("exit")
        break
