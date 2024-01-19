#include<iostream>
 #include <stddef.h>
using namespace std;
class Node{
    public:
    int value;
    Node* link;
};
void insertionatbeginning(Node*& head,int data)
{   
        Node* temp=new Node();
        temp->value=data;
        temp->link=head;
        head=temp;
}
void display(Node*& head){
    do
    {
        cout<<head->value<<"->";
        head=head->link;
    } while (head!=NULL);
    
    
}
void insertAfter(Node* prev_node, int new_data)
{
    // 1. Check if the given prev_node is NULL
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    // 2. Allocate new node
    Node* new_node = new Node();
 
    // 3. Put in the data
    new_node->value = new_data;
 
    // 4. Make next of new node as
    // next of prev_node
    new_node->link = prev_node->link;
 
    // 5. move the next of prev_node
    // as new_node
    prev_node->link = new_node;
}
int main(){
    Node* head=NULL;
    Node* one=new Node();
    Node* two=new Node();
    Node* three=new Node();
    Node* four=new Node();
    
    one->value=32;
    one->link=two;

    two->value=43;
    two->link=three;

    three->value=222;
    three->link=four;

    four->value=333;
    four->link=NULL;

    head=one;

    insertionatbeginning(head,2323);

    insertAfter(one,45);


    display(head);
   
    return 0;
}