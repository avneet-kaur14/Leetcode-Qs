class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n; //for k>n

        int i=0,j=n-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }

        for(int i=0,j=k-1;i<j;i++,j--){
            swap(nums[i],nums[j]);
        }
        for(int i=k,j=n-1;i<j;i++,j--){
            swap(nums[i],nums[j]);
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna