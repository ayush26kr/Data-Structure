#include<iostream>
#include<queue>
#include<map>
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

void print_bottomview(node* root)
{
    if(root==NULL)
    return;
    queue<pair<node*,int>>q;
    q.push({root,0});
    map<int,int>m;
    while(!q.empty())
    {
        node* curr=q.front().first;
        int dist=q.front().second;
        q.pop();
        
        m[dist]=curr->data;

        if(curr->left!=NULL)
        q.push({curr->left,dist-1});
        if(curr->right!=NULL)
        q.push({curr->right,dist+1});

    }
    for(auto i:m)
    cout<<i.second<<" ";
    
}

int main()
{
     node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->right->right = newNode(5);
    root->left->right->right->right = newNode(6);

    cout<<"Bottom view of the Tree : ";
    print_bottomview(root);
}