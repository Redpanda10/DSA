#include<iostream>
using namespace std;
bool check(int array[],int size){

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <size ; i++)
        {

           if (array[i]+array[j]==-2){
            return true;
           }
           

        }
       
        
    }
    return 0;

}
int main()
{
    int arr[10]={1,2,3,4,3,4,6,8,9,2};
    
    if (check(arr,10)){cout<<"yes";}
    else cout<<"not";
    return 0;
}