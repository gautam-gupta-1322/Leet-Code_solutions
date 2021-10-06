// Question Link -->https://leetcode.com/problems/balanced-binary-tree/
// Solution -->
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;
        int x = height(root->left);
        int y = height(root->right);
        bool a  =isBalanced(root->left);
        bool b = isBalanced(root->right);
        if((a==true&&b==true)&&(x-y>=-1&&x-y<=1))
            return true;
        else
            return false;
        
    }
    int height(TreeNode * yes)
    {
        if(yes==nullptr)
            return 0;
        int x = height(yes->left);
        int y = height(yes->right);
        if(x>y)
            return x+1;
        else
            return y+1;
    }
};