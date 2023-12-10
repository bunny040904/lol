#Write a Python program to compute following operations on String:
#a) To display word with the longest length
#b) To determines the frequency of occurrence of particular character in the string
#c) To check whether given string is palindrome or not
#d) To display index of first appearance of the substring
#e) To count the occurrences of each word in a given string

str1=input("enter a string:")
list1=str1.split()
m=0
word=0
print(list1)
for i in range(len(list1)):
    len(list1[i])
    if m<len(list1[i]):
        word=i
print("the word with longest length",list1[word])

str1=input("enter the string:")
char=input("enter a character:")
counter=0
for i in range(len(str1)):
    if char==str1[i]:
        counter+=1
print("character %s present %d times in string %s",char,counter,str1)

str1=input("enter input:")
list1=str1.split()
list2=set(list1)
list3=list(list2)
print(list1)
print(list3)
list4=[]
list5=[]
counter=0
for i in range(len(list3)):
    counter=0
    for j in range(len(list1)):
        if list3[i]==list1[j]:
            counter+=1
    list4=list3[i],counter
    list5.append(list4)
print(list5)

str2=input("enter a string:")
lenstr2=len(str2)
j=lenstr2-1
print(lenstr2)
flag=0
for i in range(int(lenstr2)):
    if(str2[i])==str2[j]:
        flag=1
    else:
        break
    j=-1
    if(flag==1):
        print("\n it is palindrome")
    else:
        print("\n it is not palindrome")
        
str1=input("enter a string:")
sub1=input("enter substring:")
sublen=len(sub1)
index1=0
j=0
for i in range(len(str1)):
    if sub1[j]==str1[i]:
        j=j+1
        if j==sublen:
            index1=i-(sublen-1)
            break
        else:
            flag=0
            j=0
print("index is",index1)
