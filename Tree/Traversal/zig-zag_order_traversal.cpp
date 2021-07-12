#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
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
void zig_zag(node* root)
{
    vector<int>vec;
    if(root==NULL)
    return;
    queue<node*>q;
    int f=1;
    q.push(root);
    while(!q.empty())
    {
        vector<int>temp;
        int sz=q.size();
        while(sz--)
        {
            node* t=q.front();
            temp.push_back(t->data);
            q.pop();
            if(t->left)
            q.push(t->left);
            if(t->right)
            q.push(t->right);
        }
        if(f%2==0)
        reverse(temp.begin(),temp.end());  //algorithm.h used for it

        for(int i=0;i<temp.size();i++)
        vec.push_back(temp[i]);

        f=!f;
    }
    for(auto i:vec)
    cout<<i<<" ";
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

    cout<<"Zig-Zag traversal of the Tree : ";
    zig_zag(root);

}

/*      1
    2        3
  4   5    6    7
9              8  

*/