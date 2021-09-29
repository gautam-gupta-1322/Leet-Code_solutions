class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr)
            return nullptr;
        ListNode * ptr1 = head;
        ListNode * ptr2 = head;
        while(ptr2!=nullptr&&ptr2->next!=nullptr)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
        }
        return ptr1;
    }
};