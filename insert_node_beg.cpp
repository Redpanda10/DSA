#include<iostream>
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
    display(head);
   
    return 0;
}