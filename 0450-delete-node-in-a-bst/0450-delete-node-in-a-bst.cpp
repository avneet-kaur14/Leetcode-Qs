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
    TreeNode* inorderSucc(TreeNode* root){
        while(root->left!=nullptr){
            root=root->left;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int val) {
        if(root==nullptr) return nullptr;

        if(val<root->val){
            root->left=deleteNode(root->left,val);
        }else if(val>root->val){
            root->right=deleteNode(root->right,val);
        }else{
            //val=root->val  //node with no chid
            if(root->left==nullptr && root->right==nullptr){
                delete root;
                return nullptr;
            }
            //node with 1 child
            if(root->left==nullptr || root->right==nullptr){
                return root->left==nullptr ? root->right : root->left; 
            }
            //node with 2 children
            TreeNode* IS=inorderSucc(root->right);
            root->val=IS->val;
            root->right=deleteNode(root->right,IS->val);
            return root;
        }
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna