#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* link;
};

//deleting the node as (node_to_be _deleted, node_before)
int delete_node_any_position(Node* &node,Node* &previous)
{
    previous->link = node->link;
    delete node;
}
//deleting the fist node
int delete_at_start(Node* &head){
    Node* temp=head;
    head=head->link;
    delete temp;
}
//deleting the last node
int delete_at_end(Node* &head){
    if (head==NULL)
    cout<<"Empty list"<<endl;
    else if(head->link==NULL)
    {
        delete head;
        head==NULL;
    }

    else{
        while (head->link->link!=NULL)
        {
            head=head->link;
        }
        if (head->link->link==NULL)
        {   
            delete head->link->link;
            head->link=NULL;
        }
        
        
    }
       
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
    Node* five=new Node();
    
    one->value=32;
    one->link=two;

    two->value=43;
    two->link=three;

    three->value=222;
    three->link=four;

    four->value=333;
    four->link=five;

    five->value=555;
    five->link=NULL;

    head=one;

    display(head);

    delete_node_any_position(three,two);
    display(head);


    delete_at_start(head);
    display(head);

    delete_at_end(head);
    display(head);

    delete_at_end(head);
    //display(head);
}
