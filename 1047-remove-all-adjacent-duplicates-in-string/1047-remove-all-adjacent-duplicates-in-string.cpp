class Solution {
public:
    string removeDuplicates(string str) {
        stack<char> s;
        for(int i=str.length()-1;i>=0;i--){
            if(!s.empty() && s.top()==str[i]){
                s.pop();
            }else{
                s.push(str[i]);
            }

        }
        string ans="";
        while(!s.empty()){
            char ch=s.top();
            ans+=ch;
            s.pop();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna