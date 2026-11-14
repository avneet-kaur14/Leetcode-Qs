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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode=new TreeNode(val);
        if(root==nullptr) return newNode;

        TreeNode* curr=root;
        TreeNode* parent=nullptr;
        while(curr!=nullptr){
            parent=curr;
            if(val < curr->val){
                curr=curr->left;
            }else{
                curr=curr->right;
            }
        }

        if(val<parent->val){
            parent->left=newNode;
        }else{
            parent->right=newNode;
        }

        return root;
        // if(root->val>val){
        //     root->left=insertIntoBST(root->left,val);
        // }else{
        //     root->right=insertIntoBST(root->right,val);
        // }
        // return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna