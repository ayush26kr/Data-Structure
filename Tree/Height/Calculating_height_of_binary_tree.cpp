#include<iostream>
#include<queue>
using namespace std;

//binary tree node
struct node{
    int data;
    node* left,*right;
};
//create a new tree node
int height(node* root)
{
    if(!root)
    return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    int max=lheight>rheight?lheight:rheight;
    return max+1;
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
    node*root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->right->right->left=newNode(7);

    cout<<"Height of the Tree is : ";
    cout<<height(root);
    return 0;
}