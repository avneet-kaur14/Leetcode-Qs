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
    unordered_map<int,int> mp;
    int idx;
    TreeNode* helper(vector<int>& postorder,int st,int end){
        if(st>end) return nullptr;
        TreeNode* root=new TreeNode(postorder[idx]);
        idx--;
        int pos=mp[root->val];
        root->right=helper(postorder,pos+1,end);
        root->left=helper(postorder,st,pos-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        idx=postorder.size()-1;
        TreeNode* root=helper(postorder,0,inorder.size()-1);
        return root;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna