class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
       double ans=1;
       if(N<0){
        x=1/x;
        N= -N;
       }
        while(N>0){
            int lastBit=(N&1);
            if(lastBit){
                ans=ans*x;
            }
            x=x*x;
            N=N>>1;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna