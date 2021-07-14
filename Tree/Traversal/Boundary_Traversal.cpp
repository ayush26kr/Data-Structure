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
void LeftTree(Node* root,vector<int>&ans)
{
    if(root==NULL)
    return;
    if(root->left){
        ans.push_back(root->data);
        LeftTree(root->left,ans);
    }
    else if(root->right)
    {
        ans.push_back(root->data);
        LeftTree(root->left,ans);
    }
}
void Leaf(Node* root,vector<int>&ans)
{
    if(!root)
    return;
    Leaf(root->left,ans);
    if((!root->left) && (!root->right))
    ans.push_back(root->data);
    Leaf(root->right,ans);
}
void RightTree(Node* root,vector<int>&ans)
{
    if(root==NULL)
    return;
    if(root->right){
        RightTree(root->right,ans);
    ans.push_back(root->data);
    }
    else if(root->left)
    {
        RightTree(root->left,ans);
        ans.push_back(root->data);
    }
}

vector <int> printBoundary(Node *root)
{
    {
        //Your code here
        vector<int>ans;
        ans.push_back(root->data);
        LeftTree(root->left,ans);
        Leaf(root,ans);
        RightTree(root->right,ans);
        return ans;
   }  
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

    cout<<"Boundary Traversal is: ";
    printBoundary(node* root);

    

}
