Node* reverse(Node* head, int k)
{
    if(!head)
    return NULL;
	Node *next=NULL,*prev=NULL;
    Node *trv=head;
    int count=0;
    while(trv!=NULL && count<k)
    {
        next=trv->next;
        trv->next=prev;
        prev=trv;
        trv=next;
        count++;
    }
    if(next!=NULL)
    head->next=reverse(next,k);
    return prev;
}
