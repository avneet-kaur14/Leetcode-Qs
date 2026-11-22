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

    TreeNode* insert(TreeNode* root,int val){
        if(root==nullptr) return new TreeNode(val);

        if(val<root->val){
            root->left=insert(root->left,val);
        }else{
            root->right=insert(root->right,val);
        }

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* root=nullptr;
        for(int i=0;i<pre.size();i++){
            root=insert(root,pre[i]);
        }
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna