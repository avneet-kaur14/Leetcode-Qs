class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        stack<int> s;
        for(int i=2*n -1 ; i>=0 ; i--){
            int el=nums[i%n];
            while(!s.empty() && el>=s.top()){
                s.pop();
            }
            if(i<n){
                if(s.empty()){
                     ans[i]=(-1);
                }else{
                    ans[i]=(s.top());
                }
            }
            s.push(el);
        }        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna