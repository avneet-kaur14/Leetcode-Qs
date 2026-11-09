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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        queue<pair<TreeNode* , TreeNode* >> q;
        q.push({root->left , root->right});

        while(!q.empty()){
            auto [f,s]=q.front();
            q.pop();

            if(!f && !s ) continue;
            if(!f || !s) return false;

            if(f->val==s->val){
                q.push({f->left,s->right});
                q.push({f->right , s->left});
            }else{
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna