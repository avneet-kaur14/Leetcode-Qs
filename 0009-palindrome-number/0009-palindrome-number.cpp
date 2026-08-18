class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev=0;
        int og=x;
        while(x>0){
            int ld=x%10;
            if(rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7)){
                return false;
            }
            rev=rev*10+ld;
            x/=10;
        }
        if(og!=rev){
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna