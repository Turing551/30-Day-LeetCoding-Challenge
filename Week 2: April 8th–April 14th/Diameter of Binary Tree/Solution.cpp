/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int solve(TreeNode* x, int& y){
        if(x == nullptr){
            return 0;
        }
        auto a=solve(x->left,y);
        auto b=solve(x->right,y);
        y=max(y,a+b);
        return max(a,b)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* x) {
        int y=0;
        solve(x,y);
        return y;
    }
};
