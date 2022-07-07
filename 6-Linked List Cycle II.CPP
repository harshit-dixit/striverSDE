class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* x=head;
        ListNode* y=head;
        while(y&&y->next)
        {
            x=x->next;
            y=y->next->next;
            if(x==y)    break;
        }
        if(y==NULL||y->next==NULL)  return NULL;
        y=head;
        while(x!=y)
        {
            x=x->next;
            y=y->next;
        }
        return y;
    }
};
