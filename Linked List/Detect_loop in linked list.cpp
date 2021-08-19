// Function to detect a cycle in a linked list using
// Floyd’s cycle detection algorithm
bool detectCycle(Node* head)
{
   Node *slow=head,*fast=head;
   while(fast && fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast)
       return true;
   }
   return false;
}
