void pairSum(struct Node *head, int x)
{
    Node *first=head;
    Node *second=head;
    while(second->next!=NULL)
    second=second->next;

    while(first!=second && second->next!=first)
    {
        if((first->data + second->data )== x){
        cout<<"( "<<first->data<<","<<second->data<<" )"<<endl;
        first=first->next;
        second=second->prev;
        }
        else{
            if((first->data + second->data )<x)
            first=first->next;
            else
            second=second->prev;
        }
    }
    return;

}
