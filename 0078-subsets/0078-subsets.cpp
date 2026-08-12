class Solution {
public:
    void backtrack(vector<int>& nums,int index,vector<vector<int>>& ans,vector<int> subset){
        if(index==nums.size()){
            ans.push_back(subset);
            return;
        }
        int ch=nums[index];
        //yes choice
        subset.push_back(ch);
        backtrack(nums,index+1,ans,subset);
        //no choice
        subset.pop_back();
        backtrack(nums,index+1,ans,subset);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        backtrack(nums,0,ans,subset);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna