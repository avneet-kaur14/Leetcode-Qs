class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101]={0};
        for(int i=0;i<nums.size();i++){
            int j=nums[i];
            arr[j]+=1;
        }
        int count=0;
        for(int i=0;i<=100;i++){
            int n=arr[i];
            count+= n*(n-1) / 2;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna