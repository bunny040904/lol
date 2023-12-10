/Pizza parlor accepting maximum M orders. Orders are served in first come first served 
/basis. Order once placed cannot be cancelled. Write C++ program to simulate the system 
/using circular queue using array


#include<iostream>
using namespace std;
class pizza{
	int order[10];
	int max;
	int f,r;
	public:
		pizza(){
			f=-1;
			r=-1;
			cout<<"\nenter maximun order:";
			cin>>max;
		}
		int full(){
			if(((f==0)&&(r==(max-1)))||(f==(r+1)%max))
				return 1;
			else
			return 0;
		}
		int qempty(){
			if(f==-1){
				return 1;
			}
			else{
			
				return 0;
			}
		}
		void add(int a){
			if(full()){
				cout<<"\norder is full";
			}else{
				if(f==-1){
					f=r=0;
				}else{
					r=(r+1)%max;
				}
				order[r]=a;
			}
		}
		void remove(){
			int i;
			i=order[f];
			if(f==r){
				f=r=-1;
			}else{
				f=(f+1)%max;
			}
			cout<<"\norder deleted"<<i;
		}
		void display(){
			int temp;
			temp=f;
			if(qempty())
			{
				cout<<"\no orders curremtly\n";
			}
			else{
				cout<<"\nthe orders are:\n\n";
				while(temp!=r){

				cout<<" "<<order[temp];
				temp=(temp+1)%max;
			}
			cout<<" "<<order[temp];
		}
	}
};
int main(){
	int ch;
	pizza p;
	do{
		cout<<"\n1.order\n2.remove order\n3.display order\n4.exit";
		cin>>ch;
		switch(ch){
			case 1:
				int o;
				cout<<"enter order number:";
				cin>>o;
				p.add(o);
				break;
			case 2:
				p.remove();
				break;
			case 3:
				p.display();
				break;
		}
	}while(ch<4);
}
