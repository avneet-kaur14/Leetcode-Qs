class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans="";

        for(int i=0;i<s.size();i++){
            ans+=s[i];

            if(ans.size()>=part.size() && (ans.substr(ans.size()-part.size())==part)){
                ans.erase(ans.size()-part.size());
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna