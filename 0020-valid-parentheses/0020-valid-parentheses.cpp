
class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(ch=='[' || ch=='{' ||ch=='('){
                s.push(ch);
            }else{
                if(s.empty()){
                    return false;
                }

                //match
                char m=s.top();
                if((m=='(' && ch==')') ||(m=='[' && ch==']') ||(m=='{' && ch=='}')){
                    s.pop();
                }else{
                    return false;
                }
            }
        }
        
        return s.empty();

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna