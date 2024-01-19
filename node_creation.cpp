#include <iostream>
using namespace std;
//creating a node.
class Node{
    public:
    int value;
    Node* next;
};
int main(){
///creating a head to start
    Node* head;

    //creating a nodes 
    
    

    Node*one=new Node();
    Node*two=new Node();
   Node* three=new Node();
  Node* four=new Node();
    

    //assigning value to the node
    one->value=1;
    two->value=2;
    three->value=2;
    four->value=2;
   

    //assigning null to the link
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=NULL;

    
    //printing the link list
    head=one;
    while (head!=NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }
    return 0;
}