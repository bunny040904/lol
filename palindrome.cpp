/A palindrome is a string of character that‘s the same forward and backward. Typically,
/punctuation, capitalization, and spaces are ignored. For example, “Poor Dan is in a droop” is a
/palindrome, as can be seen by examining the characters “poor danisina droop” and observing
/that they are the same forward and backward. One way to check for a palindrome is to reverse
/the characters in the string and then compare with them the original-in a palindrome, the
/sequence will be identical. Write C++ program with functionsa) To print original string followed by reversed string using stack
/b) To check whether given string is palindrome or not



#include <iostream>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
string str;int top = -1;
void lower_string(string s)
{
int c = 0;
while (s[c] != '\0')
{
if(s[c]==' ');
if (s[c] >= 'A' && s[c] <= 'Z')
{
s[c] = s[c] + 32;
}
c++;
} }
string blank(string s)
{
int c = 0,i;
while (s[c] != '\0')
{
if(s[c]==' ')
{
for(i=c;s[i]!='\0';i++)
{
s[i] = s[i+1];} }
else
c++;
}
return s;
}
void initialize()
{
top = -1;
}
void push(char a)
{
top++;
str[top] = a;
}
/* to delete an element in stack */
void pop()
{
top--;
}
int main()
{
int len,i,count=0,front = 0,ch;char b;
do
{
cout<<"\n\t********MENU********";
cout<<"\n 1)Accept";
cout<<"\n 2)Display";
cout<<"\n 3)Lower case";
cout<<"\n 4)Remove space";
cout<<"\n 5)Length";
cout<<"\n 6)Palendrom or not";
cout<<"\n 7)Exit";
cout<<"\n\n Enter your choice.... ";
cin>>ch;
switch(ch)
{
case 1: cout<<"Enter any string : ";
cin.ignore();
getline(cin,str);
break;
case 2: cout<<str;
break;
case 3: lower_string(str);
cout<<"Entered string in lower case is...: "<<str<<"\n";
break;case 4: str = blank(str);
cout<<"Entered string after removing space is ....."<<str<<"\n";
break;
case 5: len=str.length();
cout<<"\n Length of given string is..... "<<len<<"\n";
break;
case 6:
{
for (i = 0;str[i] != '\0';i++)
b = str[i];
push(b);
}
for (i = 0;i < (str.length() / 2);i++)
{
if (str[top] == str[front])
{
pop();
front++;
}
else
{
cout<<str<<" is not palindrome\n";
break;
}}
if ((str.length()/2)==front)
cout<<str<<" is palindrome\n";
top = -1;
}
}while(ch<7);
}

