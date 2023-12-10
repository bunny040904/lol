/: A double-ended queue(deque) is a linear list in which additions and deletions may be made at 
/either end. Obtain a data representation mapping a deque into a one-dimensional array. Write C++ 
/program to simulate deque with functions to add and delete elements from either end of the deque


#include<iostream>
using namespace std;
#define size 5
class dqueue{
      int arr[size];
      int f,r;
public :
      dqueue(){
            f=r=-1;
      }

      void display(){
            for(int i=f ; i<=r ; i++){
                  cout<<"\n"<<arr[i];
                  display();
            }
      }
        void insert_begin(int rollno){
            if(f==-1 && r==-1){
                  f=r=0;
                  arr[f]=rollno;
            }
            else if(f!=0){
                  f=f-1;
                  arr[f]=rollno;
            }
            else
                  cout<<"\nNot possible ";

            display();
      }
      void insert_end(int rollno){
            if(r==size-1){
                  cout<<"\nNot possibel";
            }
            else{
            if(f==-1 && r==-1){
                    f=r=0;
                    arr[r]=rollno;
                        }
            else{
                r=r+1;
            	arr[r]=rollno;
            }
			display();
            }
}
      void delete_end()
      {
              if(f==-1)
              {
                  cout<<"deletion is not possible::dequeue is empty";
                  return;
              }
              else
              {
                  cout<<"the deleted element is"<<arr[r];
                  if(f==r)
                  {
                      f=r=-1;
                  }
                  else
                      r=r-1;
              }
              display();
      }
      void delete_front(){
            if(f==-1)
                    {
                        cout<<"deletion is not possible::dequeue is empty";
                        return;
                    }
                    else
                    {
                        cout<<"the deleted element is"<<arr[f];
                        if(f==r)
                        {
                            f=r=-1;
                            return;
                        }
                        else
                            f=f+1;
                    }
            display();

      }

};
int main(){
      int ch;
      int rollno;
      dqueue q;
      do{
            cout<<"\n1.Add at begin \n2.Add at end \n.3 Display \n.4Delete front \n5.Delete end\n6.Exit:";
            cin>>ch;
            switch(ch){
            case 1 : cout<<"\nEnter data : ";
                        cin>>rollno;
                        q.insert_begin(rollno);
                        break;
            case 2 : cout<<"\nEnter data : ";
                        cin>>rollno;
                        q.insert_end(rollno);
                        break;
            case 3:
		.display();
			break;
            case 4 :q.delete_front();break;
            case 5 :q.delete_end();break;
            }
      }while(ch!=5);
      return 0;
}

