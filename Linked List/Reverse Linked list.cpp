	Node* reverse(Node* head)
	{
		Node* prev=NULL;
        Node* next=NULL;
        Node* trv=head;
        while(trv!=NULL)
        {
            next=trv->next;
            trv->next=prev;
            prev=trv;
            trv=next;
        }
        head=prev;
	}
