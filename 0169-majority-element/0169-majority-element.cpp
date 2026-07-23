class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int count=1,maxCount=0,el=nums[0];
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<n;i++){
        //     if(nums[i]!=nums[i-1]){
        //         count=1;
        //     }else{
        //         count++;
        //     }
        //     if(count>n/2){
        //         el=nums[i];
        //         break;
        //     }
        // }
        // return el;

        //by MOORE'S VOTING ALGORITHM
        int freq=0,el=0;
        for(int num : nums){
            if(freq==0){
                el=num;
            }
            if(el==num){
                freq++;
            }else{
                freq--;
            }
        }
        return el;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna