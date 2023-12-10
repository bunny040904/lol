/Queues are frequently used in computer programming, and a typical example is the creation of a 
/job queue by an operating system. If the operating system does not use priorities, then the jobs are 
/processed in the order they enter the system. Write C++ program for simulating job queue. Write 
/functions to add job and delete job from queue.


#include<iostream>
using namespace std;
class job{
	int f,r;
	int max;
    int jobb[10];
	public:
		job(){
		
		f=-1;
		r=-1;
		cout<<"\nenter maximun number of job:";
		cin>>max;
	}
	void push(int a){
		if(r==(max-1)){
			cout<<"\njob queue is overflow:";
			display();
			exit(0);
		}else{
		
		jobb[++r]=a;
	}
	}
	int pop(){
		if(f==r){
			cout<<"\nno job in queue";
		}
		return jobb[++f];
		display();
	}
	void display(){
		if(f==r){
			cout<<"\nno job in queue";
		}else{
			for(char i=f+1;i<=r;i++){
				cout<<"\njob in queue are:"<<" "<<jobb[i];
			}
		}
	}
	
};
int main(){
	int ch;
	job obj1;
	do{
		cout<<"\n1.push job\n2.pop job\n3.display job:";
		cin>>ch;
		switch(ch){
			case 1:
				int job;
				cout<<"\nenter job id:";
				cin>>job;
				obj1.push(job);
				break;
			case 2:
				job=obj1.pop();
				cout<<"\ndeleted job is:"<<job;
				break;
			case 3:
				obj1.display();
				break;
		}
	}while(ch<4);
}
