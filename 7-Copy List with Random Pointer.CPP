class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* itr=head;
        while(itr)
        {
            Node* front = itr->next;
            Node* copy= new Node(itr->val);
            itr->next=copy;
            copy->next=front;
            itr=front;
        }
        itr=head;
        while(itr)
        {
            if(itr->random)    itr->next->random=itr->random->next;
            itr=itr->next->next;
        }
        Node* pseudo= new Node(0);
        Node* copy=pseudo;
        itr=head;
        while(itr)
        {
            Node* front=itr->next->next;
            copy->next=itr->next;
            itr->next=front;
            itr=front;
            copy=copy->next;
        }
        return pseudo->next;
    }
};
