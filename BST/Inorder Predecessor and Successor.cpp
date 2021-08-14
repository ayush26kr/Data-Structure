void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if (root==NULL)
    return ;
    if(key<root->key)
    {
        suc=root;
        findPreSuc(root->left,pre,suc,key);
    }
    else if(key>root->key)
    {
        pre=root;
        findPreSuc(root->right,pre,suc,key);
    }
    else if(root->key==key)
    {
        if(root->left!=NULL)
        {
            Node* curr=root->left;
            while(curr->right)
            curr=curr->right;
            pre=curr;
        }
        if(root->right!=NULL)
        {
            Node* curr=root->right;
            while(curr->left)
            curr=curr->left;
            suc=curr;
        }
        return;
    }
