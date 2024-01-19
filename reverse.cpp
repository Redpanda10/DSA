#include<iostream>
using namespace std; 
void reverse(int array[],int final_value,int initial_value){
    while (final_value>initial_value)
    {
        int temp =array[initial_value];
        array[initial_value]=array[final_value];
        array[final_value]=temp;
        initial_value++;
        final_value--;
    }
    
}
void print(int array[],int size){
    for (int i = 0; i <= size; i++)
    {
        cout<<" "<<array[i];
    }
    cout<<endl;

}
int main(){

    int arr[]={10,20,30,40,50};
    int n=sizeof(arr[0]);

    //printing original array
    print(arr,n);
    
    //reversing the array element
    reverse(arr,n,0);
    
    //printing the final array
    print(arr,n);

}