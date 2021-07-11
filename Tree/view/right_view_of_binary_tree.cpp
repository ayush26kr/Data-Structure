#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* newNode(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void print_rightview(node* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    print_rightview(root->right);
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
    root->right->right->left=newNode(8);
    root->left->left->left=newNode(9);




    cout<<"Right view of the Tree : ";
    print_rightview(root);
}

/*      1
    2        3
  4   5    6    7
9              8  

*/