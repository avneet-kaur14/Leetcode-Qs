class Solution {
public:
    int reverse(int x) {
        long long reverse=0;
        int temp=x;
        if(x<0 && x>INT_MIN){
            x= abs(x);
        }
        while(x>0){
            int ld=x%10;
            reverse=reverse*10+ld;
            x=x/10;
        }
        if(reverse>=INT_MAX || reverse<=INT_MIN){
            return 0;
        }else if(temp>0){
            return reverse;
        }else if(temp<0){
            return -reverse;
        }
        return reverse;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna