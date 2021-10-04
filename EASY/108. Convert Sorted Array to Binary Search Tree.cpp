// Question Link --> https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// solution --> 
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return ans(nums,0,nums.size()-1,nullptr);
    }
    TreeNode * create(int x)
    {
        TreeNode * yes = new TreeNode(0);
        yes->val = x;
        yes->left = nullptr;
        yes->right = nullptr;
        return yes;
    }
    TreeNode * ans(vector<int> arr,int i,int j,TreeNode * yes)
    {
        if(i<=j)
        {
            int mid = (i+j)/2;
            yes = create(arr[mid]);
            yes->left = ans(arr,i,mid-1,nullptr);
            yes->right = ans(arr,mid+1,j,nullptr);
            
        }
        return yes;
    }
};