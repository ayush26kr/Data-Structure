#include<iostream>
using namespace std;

struct BST
{
    int data;
    BST* right,*left;
};
BST* createNode(int data)
{
    BST* newnode=new BST();
    newnode->data=data;
    newnode->right=newnode->left=NULL;
    return newnode;
}
struct BST* insert(BST* node,int data)
{
    if(node==NULL)
    return createNode(data);

    if(data<node->data)
    node->left=insert(node->left,data);
    else
    node->right=insert(node->right,data);
    return node;
}
void Inorder(BST* root)
{
    if(root==NULL)
    return ;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
BST* minval(BST* root)
{
    BST* current=root;

    //find the leftmost leaf
    while(current && current->left!=NULL)
    current=current->left;

    return current;
}
BST* deleteNode(BST* root,int key)
{
    if(root==NULL)
    return root;
    if(key<root->data)
    root->left=deleteNode(root->left,key);
    else if(key>root->data)
    root->right=deleteNode(root->right,key);
    else
    {
        if(root->right==NULL && root->left==NULL)
        return NULL;
        else if(root->right==NULL)
        {
            BST* temp =root->left;
            free(root);
            return temp;
        }
        else if(root->left==NULL)
        {
            BST* temp=root->right;
            free(root);
            return temp;
        }

        //node to bedeleted has two children
        BST* temp=minval(root->right); //for inorder successor , small in right
        root->data=temp->data;
        //delete the inorder successor
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
}
int main()
{
    /* Let us create following BST
            50
        /     \
        30     70
        / \ / \
    20 40 60 80 */
    struct BST* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    cout<<"Inorder Traversal : ";
    Inorder(root);

    cout<<"Enter value to be added: ";
    int key;
    cin>>key;
    root=insert(root,key);
    Inorder(root);

    cout<<"Enter value to be deleted: ";
    int key2;
    cin>>key2;
    root=deleteNode(root,key2);
    Inorder(root);

}
//Code by AYUSH KUMAR
