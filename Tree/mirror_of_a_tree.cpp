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
void inorder(node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// mirrorify function takes two trees,
// original tree and a mirror tree
// It recurses on both the trees,
// but when original tree recurses on left,
// mirror tree recurses on right and
// vice-versa

void mirrorify(node* root,node** mirror)
{
    if(root==NULL)
    {
        mirror=NULL;
        return;
    }
    *mirror=newNode(root->data);
    mirrorify(root->left,&((* mirror)->right));
    mirrorify(root->right,&((*mirror)->left));
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

    cout<<"Inorder sequence of elements of original tree: ";
    inorder(root);  //to get the element sequence in the tree

    node* mirror=NULL;  //new tree named mirror
    mirrorify(root,&mirror);

    cout<<"Inorder of mirror tree ";
    inorder(mirror);

    return 0;
}