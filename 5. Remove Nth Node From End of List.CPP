class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start=new ListNode();
        start->next=head;
        ListNode* t1=start;
        ListNode* t2=start;
        for(int i=0;i<n;i++)    t1=t1->next;
        while(t1->next!=NULL)   
        {
            t1=t1->next;
            t2=t2->next;
        }
        t2->next=t2->next->next;
        return start->next;
    }
};
