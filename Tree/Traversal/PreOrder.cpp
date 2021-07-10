#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
};
void pre_Order(node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    pre_Order(root->left);
    pre_Order(root->right);
}
node* newNode(int data)
{
    node* temp =new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

int main()
{
    node *root=newNode(5);
    root->left=newNode(3);
    root->right=newNode(7);
    root->left->left=newNode(2);
    root->left->right=newNode(4);
    root->right->left=newNode(6);
    root->right->right=newNode(8);

    cout<<"Pre order traversal is : ";
    pre_Order(root);
}