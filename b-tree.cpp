#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int value)
    {
        data = value;
        left=NULL;
        right=NULL;
    }
};
int main(){
    Node* root=new Node(2);
    root->left=new Node(1);
    root->right=new Node(3);

    root->left->left=new Node(4);
    return 0;
}
