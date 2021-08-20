Node* reverseDLL(Node * head)
{
    //Your code here
      stack<int>st;
    
    Node* trv=head;
    while(trv!=NULL)
    {
        st.push(trv->data);
        trv=trv->next;
    }
    trv=head;
    while(trv!=NULL)
    {
        trv->data=st.top();
        st.pop();
        trv=trv->next;
    }
    return head;
}
