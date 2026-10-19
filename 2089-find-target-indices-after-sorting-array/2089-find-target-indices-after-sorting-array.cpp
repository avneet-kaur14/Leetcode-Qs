class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int els=0 , occ=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                occ++;
            }
            if(nums[i]<target){
                els++;
            }
        }
        while(occ>0){
            ans.push_back(els);
            els++;
            occ--;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna