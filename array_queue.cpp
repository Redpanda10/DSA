#include<iostream>
using namespace std;
#define size 20
//queue------first in first out//
//in this program front starts form 0 rather than -1
class queue{
    public:
    int array[size];
    int front=0;
    int rear=0;
void enqueue(int value){
    if (rear==size-1)
    {
        cout<<"Queue is full!"<<endl;    
    }
    else
    {
    array[rear]=value;
    rear++;
    cout<<value<<"--Enqueued"<<endl;
    }
    
}
void display(){
    if (rear!=0)
    {
    
    
        for (int i = front; i <= rear; i++)
        {
            cout<<array[i]<< "  ";
        }
        cout<<endl;
    }
    else cout<<"Queue is empty!"<<endl; 
    
}
void dequeue(){ 
    if (front>rear)
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else {
        
        front++;
        cout<<"Dequeue successfully"<<endl;
    }
    
}
};
int main()
{   
    queue q1;
    q1.display();

    q1.enqueue(23);
    q1.enqueue(23);
    q1.enqueue(54);
   // q1.enqueue(22);
    q1.display();
    
    q1.dequeue();
    q1.display();
    
    q1.dequeue();
    q1.display();
    


}