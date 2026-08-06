class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1,first=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }else if(nums[mid]<target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        if(first==-1){
            return {-1,-1};
        }
        int low=0,high=nums.size()-1,last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return {first,last};
}
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna