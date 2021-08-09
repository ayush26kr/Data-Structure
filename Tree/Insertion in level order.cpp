//Insertion in a Binary Tree in level order
#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* CreateNode(int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    newNode->right=newNode->left=NULL;
    return newNode;
}
//Inorder traversal in binary tree
void inorder(Node* temp)
{
    if(temp==NULL)
    return;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
//Function to insert element in binary tree
Node* InsertNode(Node* root,int data)
{
    //if the tree is empty , assign new node address to root
    if(root==NULL)
    {
        root=CreateNode(data);
        return root;
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();

        if(temp->left!=NULL)
        q.push(temp->left);
        else
        {
            temp->left=CreateNode(data);
            return root;
        }

        if(temp->right!=NULL)
        q.push(temp->right);
        else{
            temp->right=CreateNode(data);
            return root;
        }
    }
}

int main()
{
    Node* root=CreateNode(10);
    root->left=CreateNode(11);
    root->left->left=CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);

    cout<<"Inorder traversal before insertion : ";
    inorder(root);
    cout<<endl;

    int key=12;
    root=InsertNode(root,key);

    cout<<"Inorder traversal after insertion: ";
    inorder(root);
    cout<<endl;

    return 0;
}

/*  before                                    
        10
    11      9
7        15    8  /*        


/*  after
        10
   11         9
7     12   15    8  /* 
