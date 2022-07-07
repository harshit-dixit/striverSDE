class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* x=head;
        ListNode* y=head;
        while(x&&y&&y->next)
        {
            x=x->next;
            y=y->next->next;
            if(x==y)    return true;
        }
        return false;
    }
};
