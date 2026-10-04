class Solution {
public:
    string decodeString(string str) {
        stack<int> nums;
        stack<string> prev;
        int num=0;
        string curr="";

        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(isdigit(ch)){
                num=num*10 + (ch-'0');
            }else if(ch=='['){
                nums.push(num);
                prev.push(curr);

                num=0;
                curr="";
            }else if(ch==']'){
                string pre=prev.top();
                prev.pop();

                int k=nums.top();
                nums.pop();

                for(int j=0;j<k;j++){
                    pre=pre+curr;
                }
                curr=pre;
            }else{
                curr+=ch;
            }
        }
        return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna