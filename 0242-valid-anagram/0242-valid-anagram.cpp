class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int> freq(26);
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }

        for(int i=0;i<t.length();i++){
            freq[t[i]-'a']--;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna