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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr) return nullptr;
        if(root->val==val) return root;

        TreeNode* curr=root;
        while(curr!=nullptr){
            if(val<curr->val){
                curr=curr->left;
            }else{
                curr=curr->right;
            }
            if(curr!=nullptr && curr->val==val){
                return curr;
            }
        }
        return curr;

        // if(root->val>val){
        //     return searchBST(root->left,val);
        // }else{
        //     return searchBST(root->right,val);
        // }



    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna