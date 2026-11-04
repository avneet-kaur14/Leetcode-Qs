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

    vector<int> preorderTraversal(TreeNode* root) {
        // if(root==NULL){
        //     return {};
        // }
        // ans.push_back(root->val);
        // preorderTraversal(root->left);
        // preorderTraversal(root->right);

        // return ans;

        //iterative approach
        stack<TreeNode*> st;
        if(root==nullptr){
            return {};
        }
        st.push(root);
        vector<int> ans;
        while(!st.empty()){
            TreeNode* curr=st.top();
            st.pop();

            ans.push_back(curr->val);
            if(curr->right){
                st.push(curr->right);
            }
            if(curr->left){
                st.push(curr->left);
            }
        }
        return ans;

    };
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna