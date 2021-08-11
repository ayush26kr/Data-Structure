class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>res;
     
      queue<Node*>q;
      q.push(node);
      
      Node* temp;
      
      while(!q.empty())
      {
          temp=q.front();
          q.pop();
          
          if(temp->left)
          q.push(temp->left);
          if(temp->right)
          q.push(temp->right);
          
        res.push_back(temp->data);
          
          
      }
      return res;
      
      
    }
};
