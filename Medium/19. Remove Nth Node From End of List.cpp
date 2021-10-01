// Question Link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Solution - 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int x) {
        ListNode * yes = head;
        int n=0;
        vector<ListNode*>ans;
        while(yes!=nullptr)
        {
            ans.push_back(yes);
            n++;
            yes=yes->next;
        }
        if(n==x)
        {
            return head->next;
        }
        int z = n-x;
        yes = ans[z-1];
        yes->next = yes->next->next;
        return head;
    }
};