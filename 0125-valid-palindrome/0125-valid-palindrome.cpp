class Solution {
public:
    bool isPalindrome(string s) {
        // string og="";
        // string temp="";
        // // int k=0;
        // for(int i=0;i<=s.length()-1;i++){
        //     if(isalnum(s[i])){
        //         og+=tolower(s[i]);
        //     }
        // }
        // for(int i=og.length()-1;i>=0;i--){
        //     temp+=og[i];
        // }
        // if(temp==og){
        //     return true;
        // }
        // return false;


        int left=0,right=s.length()-1;
        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;
            }
            while(left<right && !isalnum(s[right])){
                right--;
            }
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna