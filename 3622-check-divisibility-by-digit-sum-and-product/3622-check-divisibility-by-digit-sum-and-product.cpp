class Solution {
public:
    int sum(int n){
        int add=0;
        while(n>0){
            int ld=n%10;
            add+=ld;
            n/=10;
        }
        return add;
    }

    int product(int n){
        int pr=1;
        while(n>0){
            int ld=n%10;
            pr*=ld;
            n/=10;
        }
        return pr;
    }
    
    bool checkDivisibility(int n) {
        int result=sum(n)+product(n);
        if(n%result!=0){
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna