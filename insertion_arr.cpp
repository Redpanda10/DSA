#include<iostream>
using namespace std;
#define size 10
void insert(int array[],int position,int element){
      
    for (int i = 8; i >= position; i--){
        array[i+1]=array[i];

    }
    
    array[position]=element;
    
}

void display(int array[]){
    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7};

    //before insertion 
    display(arr);
    
    //inserting element at position 2
    insert(arr,2,12);

    //after insertion
    display(arr);
    return 0;
}
