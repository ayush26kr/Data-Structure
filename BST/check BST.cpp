 int isBSTutil(Node* root,int min,int max)
    {
        if(root==NULL)
        return 1;
        if(root->data<min || root->data>max)
        return 0;
        return isBSTutil(root->left,min,root->data-1)&&isBSTutil(root->right,root->data+1,max);
    }
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        return(isBSTutil(root,INT_MIN,INT_MAX));
    }
