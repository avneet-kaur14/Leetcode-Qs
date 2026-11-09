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
    bool isIdentical(TreeNode* root , TreeNode* subroot){
        if(root==nullptr && subroot==nullptr){
            return true;
        }else if(root==nullptr || subroot==nullptr){
            return false;
        }
        if(root->val!=subroot->val){
            return false;
        }
        return isIdentical(root->left , subroot->left) &&
        isIdentical(root->right , subroot->right);


    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root==nullptr && subroot==nullptr){
            return true;
        }else if(root==nullptr || subroot==nullptr){
            return false;
        }

        if(root->val == subroot->val){
            if(isIdentical(root , subroot))
                return true;
        }
        bool isleft=isSubtree(root->left , subroot);
        if(!isleft)
            return isSubtree(root->right , subroot);

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna