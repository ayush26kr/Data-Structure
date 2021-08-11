vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>res;
    queue<Node*>q;
    stack<Node*>s;
    q.push(root);
    Node* temp;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        s.push(temp);
        if(temp->right)
        q.push(temp->right);
        if(temp->left)
        q.push(temp->left);
    }
    while(!s.empty())
    {
        root=s.top();
        res.push_back(root->data);
        s.pop();
    }
    return res;
    
}
