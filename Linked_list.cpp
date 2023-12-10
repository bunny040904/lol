/Department of Computer Engineering has student's 1/8 club named 'Pinnacle Club'.
/Students of Second, third and final year of department can be granted membership on request.
/Similarly one may cancel the membership of club. First node is reserved for president of club
/and last node is reserved for secretary of club. Write C++ program to maintain club member‘s
/information using singly linked list. Store student PRN and Name. Write functions to
/a) Add and delete the members as well as president or even secretary.
/b) Compute total number of members of club
/c) Display members
/d) Display list in reverse order using recursion
/e) Two linked lists exists for two divisions. Concatenate two lists

#include<iostream>
#include<cstring>
using namespace std;
struct node{
	int prn,rollno;
	char name[50];
	struct node*next;
};
class info{
	node*s=NULL,*head1=NULL,*head2=NULL,*temp2=NULL,*head=NULL,*temp=NULL;
	int b,c,i,j,ct;
	char a[20];
	public:
		node *create();
		void insertp();
		void insertm();
		void delm();
		void delp();
		void dels();
		void display();
		void count();
		void reverse();
		void rev(node*p);
		void concat();
	
};
node*info::create(){
	node *p=new(struct node);
	cout<<"enter a name of student:";
	cin>>a;
	//strcpy(p->name,a);
	cout<<"\n enter prn number of student:"<<endl;
	cin>>b;
	p->prn=b;
	cout<<"enter student rollnumber:";
	cin>>c;
	p->rollno=c;
	p->next=NULL;
	return p;
}
void info::insertm(){
	node *p=create();
	if(head==NULL){
		head=p;
	}
	else{
		temp=head;
		while(temp->name!=NULL)
		{
			temp=temp->next;
		}
			temp->next=p;
	}
}
void info::insertp(){
	node *p=create();
	if(head==NULL){
		head=p;
	}
	else{
		temp=head;
		head=p;
		head->next=temp->next;
	}
}
void info::display()
{
	if(head==NULL){
		cout<<"link list empty";
	}
	else{
		temp=head;
		cout<<"prn rollno name\n";
		while(temp->name!=NULL){
			cout<<"\n"<<temp->prn<<""<<temp->rollno<<""<<temp->name;
			temp=temp->next;
		}
	    cout<<"\n"<<temp->prn<<""<<temp->rollno<<""<<temp->name;
	}
}
void info::delm(){
	int m,f=0;
	cout<<"\enter prn number of studnet whose data to daleted:";
	cin>>m;
	temp=head;
	while(temp->next!=NULL){
		if(temp->prn==m){
			s->next=temp->next;
			delete(temp);
			f=1;
		}
		s=temp;
		temp=temp->next;
	}
	if(f==0){
		cout<<"\n sorry member not deleted";
	}
}
void info::dels(){
	temp=head;
	while(temp->next!=NULL){
		s=temp;
		temp=temp->next;
	}
	s->next=NULL;
	delete(temp);
}
void info::count(){
	temp=head;
	ct=0;
	while(temp->next!=NULL){
		temp=temp->next;
		ct++;
	}
	ct++;
	cout<<"count of members is:"<<ct;
}
void info::reverse(){
	rev(head);
}
void info::rev(node*temp){
    if(temp==NULL)
    {
        return;
    }
    else{
        rev(temp->next);
    }
    cout<<""<<temp->prn<<""<<temp->rollno<<""<<temp->name<<"";
}
void info::concat(){
	int k,j;
	cout<<"enter number of member in list1:";
	cin>>k;
	head=NULL;
	for(i=0;i<k;i++){
		insertm();
		head2=head;
	}
	head=NULL;
	temp2=head1;
	while(temp2->next!=NULL){
		temp2=temp2->next;}
		temp2->next=head2;
		temp2=head;
		cout<<"prn rollno name \n";
		while(temp2->next!=NULL){
			cout<<"\n"<<temp2->prn<<""<<temp2->rollno<<""<<temp2->name<<temp2->next<<"\n";
		}
}
int main(){
	info s;
	int i;
	char ch;
	do{
		cout<<"\n choice the option:";
		cout<<"\n 1.to insert precident:";
		cout<<"\n 2.to insert memeber";
		cout<<"\n 3.to insert secretary";
		cout<<"\n 4.to delete percident";
		cout<<"\n 5.delete member";
		cout<<"\n 6.to delete secreatary";
		cout<<"\n to display the data";
		cout<<"\n 8.count members";
		cout<<"\n 9.to display reverse string";
		cout<<"\n 10.to concat two string";
		cin>>i;
		switch(i){
			case 1:
				s.insertp();
				break;
			case 2:
				s.insertm();
				break;
			case 3:
				s.insertm();
				break;
			case 4:
				cout<<"";
				break;
			case 5:
				s.delm();
				break;
			case 6:
				s.dels();
				break;
			case 7:
				s.display();
				break;
			case 8:
				s.count();
				break;
			case 9:
				s.reverse();
				break;
			case 10:
				s.concat();
				break;
			default:
				cout<<"\n unknown choice";
		}
		cout<<"\n do you want to continue y/Y \n";
		cin>>ch;
		}while(ch=='y'||ch=='Y');
	return 0;
}
