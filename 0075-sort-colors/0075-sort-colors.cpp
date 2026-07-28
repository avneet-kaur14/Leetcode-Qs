class Solution {
public:
    void sortColors(vector<int>& nums) {
        //DNF 
        int n=nums.size();
        int low=0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna