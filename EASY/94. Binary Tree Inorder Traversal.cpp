// Question Link --> https://leetcode.com/problems/binary-tree-inorder-traversal/
// Solution -->
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        answer(ans,root);
        return ans;
    }
    void answer(vector<int> &oh,TreeNode * yes)
    {
        if(yes==nullptr)
            return;
        answer(oh,yes->left);
        oh.push_back(yes->val);
        answer(oh,yes->right);
    }
};