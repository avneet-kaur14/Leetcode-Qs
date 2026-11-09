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
    int diameter=0;
    pair<int , int> solve(TreeNode* root){
        if(root==nullptr){
            return {0,0};
        }
        pair<int,int> left=solve(root->left);
        pair<int,int> right=solve(root->right);
        int height=1+max(left.first , right.first);
        int diameter=max(left.first+right.first , max(left.second , right.second));
        return {height,diameter};
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return solve(root).second;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna