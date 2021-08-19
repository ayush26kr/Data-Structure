Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set<int>h;
     struct Node* curr=head;
     struct Node* prev=NULL;
     while(curr!=NULL)
     {
         if(h.find(curr->data)!=h.end())
         {
             prev->next=curr->next;
             delete(curr);
         }
         else
         {
             h.insert(curr->data);
             prev=curr;
         }
         curr=prev->next;
     }
     return head;
     
    }
