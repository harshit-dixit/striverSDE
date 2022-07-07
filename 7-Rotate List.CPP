class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)   return NULL;
        ListNode* x=head;
        ListNode* y=head;
        int n=0;
        while(x)
        {
            n++;
            x=x->next;
        }
        k=k%n;
        if(k==0)    return head;
        x=head;
        for(int i=0;i<k;i++)    x=x->next;
        while(x->next)
        {
            x=x->next;
            y=y->next;
        }
        ListNode* temp=y->next;
        x->next=head;
        y->next=NULL;
        return temp;
    }
};
