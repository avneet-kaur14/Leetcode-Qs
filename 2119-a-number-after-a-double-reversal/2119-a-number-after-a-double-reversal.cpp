class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
        }
        if(num%10==0){
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna