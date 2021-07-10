#include<iostream>
using namespace std;

//binary tree node
struct node{
    int data;
    node* left,*right;
};

int height(struct node* node)
{
    // base case tree is empty
    if (node == NULL)
        return 0;
 
    // If tree is not empty then height = 1 + max of left
    // height and right heights
    return 1 + max(height(node->left), height(node->right));
}
//create a new tree node
int cal_diameter(node* root)
{
    if(root==NULL)
    return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);
    int ldiameter=cal_diameter(root->left);
    int rdiameter=cal_diameter(root->right);


    // Return max of following three
    // 1) Diameter of left subtree
    // 2) Diameter of right subtree
    // 3) Height of left subtree + height of right subtree + 1
    return max(lheight + rheight + 1,
            max(ldiameter, rdiameter));
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

    cout<<"Diameter of the Tree is : ";
    cout<<cal_diameter(root);
    return 0;
}