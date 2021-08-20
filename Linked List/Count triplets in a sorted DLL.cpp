//Approach using hash table
//by Ayush Kumar
int countTriplets(struct Node* head, int x)
{
    unordered_map<int,Node*>um;
    Node *ptr1,*ptr2,*ptr3;
    int count=0;
    int p_sum=0;

    for(ptr1=head;ptr1!=NULL;ptr1=ptr1->next)
    um[ptr1->data]=ptr1;

    for(ptr2=head;ptr2!=NULL;ptr2=ptr2->next)
    {
        for(ptr3=ptr2->next;ptr3!=NULL;ptr3=ptr3->next)
        {
            p_sum=ptr2->data+ptr3->data;

            if(um.find(x-p_sum)!=um.end() && um[x-p_sum]!=ptr2 && um[x-p_sum]!=ptr3)
            count++;
        }
    }
    return (count/3);
}
