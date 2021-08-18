  bool detectLoop(Node* head)
    {
        // your code here
        unordered_set<Node*>h;
        while(head!=NULL)
        {
            if(h.find(head)!=h.end())
            return true;
            
            h.insert(head);
            head=head->next;
            
        }
        return false;
    }
