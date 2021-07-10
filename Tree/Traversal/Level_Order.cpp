#include<iostream>
#include<queue>
using namespace std;

//binary tree node
struct node{
    int data;
    node* left,*right;
};
//level order traversal line by line
void level_order(node* root)
{
    if(root==NULL)
    return;
    queue<node*>q;   //creating a empty queue
    node* curr;   //curr will store front element of queue

    q.push(root);  //enqueue root and null node
    q.push(NULL);
    while(q.size()>1)
    {
        curr=q.front();
        q.pop();

        if(curr==NULL)  //condition to check occurence of next level
        {
            q.push(NULL);
            cout<<"\n";
        }
        else{
            //pushing left child of current node
            if(curr->left)
            q.push(curr->left);

            //pushing right child of current node
            if(curr->right)
            q.push(curr->right);

            cout<<curr->data<<" ";
        }
    }
} 

//create a new tree node
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

    level_order(root);
    return 0;
}