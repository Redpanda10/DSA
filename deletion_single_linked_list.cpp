#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* link;
};

//deleting the node as (node_to_be _deleted, node_before)
int delete_node(Node* &node,Node* &previous)
{
    previous->link = node->link;
    delete node;
}
int display(Node* &head){
    Node* temp = head;
    do
    {
        cout<<head->value<<"->";
        head=head->link;
    }while (head != NULL);
    if (head==NULL)
    {
        cout<<"NULL";
        head=temp;
    }
    cout<<endl;
    
   return 0; 
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

    display(head);

    delete_node(three,two);

    display(head);



}
