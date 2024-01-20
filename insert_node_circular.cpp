#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;

};
int insert_at_begin(Node* &head,int data,Node* &tail)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->link=head; //we can use tail->link instead of head
    head=newNode;
    tail->link=head;
    
    
}
int insert_at_end(Node* &tail,int data)
{
    Node* newNode = new Node();
    newNode->data=data;
    newNode->link=tail->link;
    tail->link=newNode;
    tail=newNode;
    
}
int insert_after(Node* &afternode,int data){
    Node* newNode = new Node();
    newNode->data=data;
    newNode->link=afternode->link;
    afternode->link=newNode;
}
int display(Node* &head)
{
    Node* temp = head;
    
        do
        {
            cout<<temp->data<<"->";
            temp=temp->link;
        }while (temp!=head);

        
        
    cout<<endl;   
}
    
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    Node* node_one=new Node();
    Node* node_two=new Node();
    Node* node_three=new Node();
    
    node_one->data=43;
    node_one->link=node_two;
    
    node_two->data=3;
    node_two->link = node_three;

    node_three->data=4;
    node_three->link = node_one;

    head=node_one;
    tail=node_three;

    insert_at_begin(head,69,tail); 
    display(head);

    display(head);
   insert_after(node_two,45);

    display(head);
   
    insert_at_end(tail,56);
    display(head);
     
    

    return 0; 

}