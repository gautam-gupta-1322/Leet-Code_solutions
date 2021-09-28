// Link - https://leetcode.com/problems/merge-k-sorted-lists/
//solution -
class Solution {
public:
    void sort(vector<ListNode*>&lists,int i,int mid,int j)
    {
        ListNode * ptr1 = lists[i];
        ListNode * ptr2 = lists[mid+1];
        if(ptr1==nullptr&&ptr2==nullptr)
            return;
        if(ptr1==nullptr)
        {
            lists[i]=lists[mid+1];
            lists[mid+1]=nullptr;
        }
        ListNode * temp;
        vector<int>yes;
        while(ptr1!=nullptr&&ptr2!=nullptr)
        {
            if(ptr1->val>ptr2->val)
            {
                yes.push_back(ptr2->val);
                ptr2=ptr2->next;
            }
            else
            {
                yes.push_back(ptr1->val);
                if(ptr1->next==nullptr)
                    temp = ptr1;
                ptr1 = ptr1->next;
            }
        }
        while(ptr1!=nullptr)
        {
            yes.push_back(ptr1->val);
            if(ptr1->next==nullptr)
                    temp = ptr1;
            ptr1 = ptr1->next;
        }
        while(ptr2!=nullptr)
        {
            yes.push_back(ptr2->val);
                    ptr2=ptr2->next;
        }
        temp->next = lists[mid+1];
        ptr1 = lists[i];
        int k=0;
        while(ptr1!=nullptr)
        {
            ptr1->val=yes[k++];
            ptr1=ptr1->next;
        }
    }
    void merge(vector<ListNode*>&lists,int i,int j)
    {
        int mid = (i+j)/2;
        if(i<j)
        {
            merge(lists,i,mid);
            merge(lists,mid+1,j);
            sort(lists,i,mid,j);
            
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return nullptr;
        if(lists.size()==1)
            return lists[0];
        merge(lists,0,lists.size()-1);
        return lists[0];
    }
};