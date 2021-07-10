#include<iostream>
using namespace std;
struct node{
    int data;
    node *right,*left;
};
void In_Order(node* root)
{
    if(root==NULL)
    return;
    In_Order(root->left);
    cout<<root->data<<" ";
    In_Order(root->right);

}
node* newnode(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int main()
{
    node *root=newnode(10);
    root->left=newnode(5);
    root->right=newnode(15);
    root->left->left=newnode(2);
    root->left->right=newnode(4);
    root->right->left=newnode(6);
    root->right->right=newnode(8);

    cout<<"InOrder traversal is : ";
    In_Order(root);
}