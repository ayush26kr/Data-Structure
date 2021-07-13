//A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *right,*left;
};
node* newNode(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}

int height(node* node)
{
    if(node==NULL)
    return 0;
    
    return max(height(node->left),height(node->right))+1;
}

bool is_balanced(node* root)
{
    if (root==NULL)
    return 1;  //empty tree is balanced

    int lh=height(root->left);
    int rh=height(root->right);

    if (abs(lh - rh) <= 1 && is_balanced(root->left) && is_balanced(root->right))
        return 1;

    return 0;
}

int main()
{
    node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->right->right->left=newNode(8);
    root->left->left->left=newNode(9);

    if(is_balanced(root))
    cout<<"Tree is Balanced ";
    else
    cout<<"Tree is not Balanced";
    

}

/*      1
    2        3
  4   5    6    7
9              8  

*/