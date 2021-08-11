/*Given a binary tree, delete a node from it by making sure that tree shrinks from the bottom 
 (i.e. the deleted node is replaced by the bottom-most and rightmost node). 
 This is different from BST deletion. Here we do not have any order among elements, so we replace with the last element.*/

#include<queue>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int data)
{
    Node* newNode=new Node;
    newNode->data=data;
    newNode->right=newNode->left=NULL;
    return newNode;
}
void Inorder(Node* temp)
{
    if(temp==NULL)
    return;
    Inorder(temp->left);
    cout<<temp->data<<" ";
    Inorder(temp->right);
}
void deleteDeepest(Node* root,Node* del_node)  
{
    queue<Node*>q;
    Node* temp;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp==del_node)
        {
            temp=NULL;
            delete(del_node);
            return;
        }
        if(temp->right)
        {
            if(temp->right==del_node)
            {
                temp->right=NULL;
                delete(del_node);
                return;
            }
            else
            q.push(temp->right);
        }
        if(temp->left)
        {
            if(temp->left==del_node)
            {
                temp->left==NULL;
                delete(del_node);
                return;
            }
            else
            q.push(temp->left);
        }
    }

}
Node* deletion(Node* root,int key)
{
    if(root==NULL)
    return NULL;

    if(root->left==NULL && root->right==NULL)
    {
        if(root->data==key)
        return NULL;
        else 
        return root;
    }
    queue<Node*>q;
    q.push(root);
    Node* temp;
    Node* key_node;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();

        if(temp->data==key)
        key_node=temp;

        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    
    }
    //here temp will store the deepest and rightmost node while key node will store the node that has data=key(to be deleted)
    //now we will copy temp->data to where key is there and delete the temp 
    if(key_node!=NULL)
    {
        int x=temp->data;
        deleteDeepest(root,temp);
        key_node->data=x;

    } 
    return root;
}

int main()
{
    Node* root=newNode(10);
    root->left = newNode(11);
    root->left->left = newNode(7);
    root->left->right = newNode(12);
    root->right = newNode(9);
    root->right->left = newNode(15);
    root->right->right = newNode(8);

    cout<<"Inorder traversal before deletion :";
    Inorder(root);

    int key=11;
    root=deletion(root,key);
    cout<<endl;

    cout<<"Inorder traversal after deletion :";
    Inorder(root);

}
