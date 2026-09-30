class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int sz=nums2.size();
        unordered_map<int, int> mp;
        stack<int> s;
        for(int i=sz-1;i>=0;i--){
            while(!s.empty() && nums2[i]>=s.top()){
                s.pop();
            }
            if(s.empty()){
                mp[nums2[i]]=-1;
            }else{
                mp[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        vector<int> ans;
        for(int i : nums1){
            ans.push_back(mp[i]);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna