/In any language program mostly syntax error occurs due to unbalancing delimiter such as
/(),{},[]. Write C++ program using stack to check whether given expression is well parenthesized or
/not.

#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
char stack[20];
int top=-1;
int flag=0;
char string1[20];
void push(char s){
	top++;
	stack[top]=s;
}
char pop(){
	char x;
	x=stack[top];
	top--;
	return x;
}
int isStackEmpty(){
	if(top==-1)
	return 1;
	else
		return 0;
}
void accept(){
	cout<<"enter the string:"<<endl;
	cin>>string1;
	cout<<"entered string is:"<<string1<<endl;
}
void checkp(){
	flag=0;
	for(int i=0;string1[i]!='\0';i++){
		if(string1[i]=='('||string1[i]=='{'||string1[i]=='['){
		push(string1[i]);
	}
	else if(string1[i]==')'){
		if(pop()!='(')
		flag=1;
	}
	else if(string1[i]=='}'){
		if(pop()!='{')
		flag=1;
	}
	else if(string1[i]==']'){
		if(pop()!='[')
		flag=1;
	}
}
if(isStackEmpty()&&flag==0)
cout<<"paranthesis is balanced"<<endl;
else
cout<<"paranthesis is not balanced"<<endl;
}
void display(){
	int i;
	cout<<"\n"<<"contents of stack:";
	for(i=0;i<=top;i++)
	cout<<"\n "<<stack[i]<<endl;
}
int main()
{
	int ch;
	do{
		cout<<"1.enter a string"<<endl;
		cout<<"2.display string"<<endl;
		cout<<"3.check paranthesis"<<endl;
		cout<<"enter your choice:";
		cin>>ch;
		switch(ch){
			case 1:accept();
				break;
			case 2:display();
				break;
			case 3:checkp();
				break;
		}
	}while(ch<4);
	return 0;
}
