Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* trv=head;
 Node* temp=NULL;
 if(trv==NULL)
 return NULL;
 while(trv->next!=NULL)
 {
     if(trv->data==trv->next->data)
     {
         temp=trv->next->next;
         free(trv->next);
         trv->next=temp;
     }
     else
     trv=trv->next;
     
 }
 return head;
}
