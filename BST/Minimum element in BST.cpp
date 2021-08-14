//Function to find the minimum element in the given BST.
int minValue(Node* root)
{
    // Code here
    Node* current=root;
    while(current->left)
    current=current->left;
    return current->data;
}
