 void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* trv=head;
        Node* prev=NULL;
       unordered_set<Node*> s;
        
        while(trv){
        if(s.find(trv)!=s.end())
        {
            prev->next=NULL;
            return;
        }
        
        s.insert(trv);
        prev=trv;
        trv=trv->next;
    }
   }
