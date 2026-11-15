/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root , long long min,long long max){
        if(root==nullptr) return true;

        if(root->val >= max || root->val<=min) return false;

        bool isleft=solve(root->left,min,root->val);
        bool isright=solve(root->right,root->val,max);
        return isleft && isright;
    }

    bool isValidBST(TreeNode* root) {
        return solve(root , LLONG_MIN ,LLONG_MAX);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna