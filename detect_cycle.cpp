//Floyd's Algorithm
//Hare and Tortoise Algorithm(slow and fast pointer concept)
//Detect Cycle
// remove cycle
/* first detect cycle using slow and fast pointer then move fast or slow anyone of them shift to starting node , then move  both from their point to 1 step forward 
where their next will meet is the starting point of the cycle */
void remove_cycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast)

    fast= head;
    while (slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
slow->next=NULL;
}
