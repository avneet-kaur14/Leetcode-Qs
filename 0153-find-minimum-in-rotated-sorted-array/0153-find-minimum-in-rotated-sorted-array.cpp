class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0,end=nums.size()-1;
        int ans=INT_MAX;
        int p;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(nums[st]<=nums[mid]){
                p=nums[st];
                // ans=min(nums[st],ans);
                st=mid+1;
            }else{
                p=nums[end];
                // ans=min(nums[end],ans);

                end=mid;
            }
             ans=min(p,ans);

        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna