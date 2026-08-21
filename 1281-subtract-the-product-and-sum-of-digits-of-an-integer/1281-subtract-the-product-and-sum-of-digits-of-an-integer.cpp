class Solution {
public:
    int product(int n){
        int pr=1;
        while(n>0){
            int ld=n%10;
            pr*=ld;
            n/=10;
        }
        return pr;
    }
    int add(int n){
        int sum=0;
        while(n>0){
            int ld=n%10;
            sum+=ld;
            n/=10;
        }
        return sum;
    }
    int subtractProductAndSum(int n) {
        int pr=product(n);
        int sum=add(n);
        return pr-sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna