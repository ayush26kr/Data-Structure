#include<iostream>
#include<map>
#include<queue>
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
void print_topview(node* root)
{
    if(root==NULL)
    return;
    queue<pair<node*,int>>q;  //node and its distance
    q.push({root,0});
    map<int,int>m;    //(node and dis , data)

    while(!q.empty())
    {
        node* curr=q.front().first;
        int dist=q.front().second;
        q.pop();
        if(m.count(dist)==0)
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
    node*root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->right->right->left=newNode(8);
    root->left->left->left=newNode(9);




    cout<<"Top view of the Tree : ";
    print_topview(root);
}

/*      1
    2        3
  4   5    6    7
9              8  

*/