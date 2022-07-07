class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)    return true;
        ListNode* x=head;
        ListNode* y=head;
        while(y->next&&y->next->next)
        {
            x=x->next;
            y=y->next->next;
        }
        y=x->next;
        x->next=NULL;
        ListNode* temp=y;
        while(y->next)
        {
            temp=y->next;
            y->next=x;
            x=y;
            y=temp;
        }
        y->next=x;
        x=head;
        while(x)
        {
            if(x->val!=y->val)  return false;
            x=x->next;
            y=y->next;
        }
        return true;
    }
};
