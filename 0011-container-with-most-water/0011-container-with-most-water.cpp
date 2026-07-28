class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int maxWater=0;

        while(left<right){
            int width=right-left;
            int minHeight=min(height[left],height[right]);
            maxWater=max(maxWater,width*minHeight);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }

        return maxWater;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna