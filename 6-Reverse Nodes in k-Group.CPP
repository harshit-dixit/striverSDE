class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1||!head) return head;
        int len=0;
        ListNode* it=head;
        while(it)
        {
            len++;
            it=it->next;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* pre=dummy, *cur=dummy, *nex=dummy;
        while(len>=k)
        {
            cur=pre->next;
            nex=cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            pre=cur;
            len-=k;
        }
        return dummy->next;
    }
};
