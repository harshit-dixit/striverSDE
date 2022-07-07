class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* head=new ListNode();
        head->next=NULL;
        ListNode* ans=head;
        while(l1&&l2)
        {
            int k=l1->val+l2->val+carry;
            carry=k/10;
            ListNode* temp=new ListNode();
            temp->val=k%10;
            temp->next=NULL;
            head->next=temp;
            head=temp;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            int k=l1->val+carry;
            l1->val=k%10;
            carry=k/10;
            head->next=l1;
            head=l1;
            l1=l1->next;
        }
        while(l2)
        {
            int k=l2->val+carry;
            l2->val=k%10;
            carry=k/10;
            head->next=l2;
            head=l2;
            l2=l2->next;
        }
        if(carry)
        {
            ListNode* temp=new ListNode();
            temp->val=carry;
            temp->next=NULL;
            head->next=temp;
        }
        return ans->next;
    }
};
