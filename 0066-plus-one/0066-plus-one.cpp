class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int num=0;
        for(int i=n-1;i>=0;i--){
            int ld=digits[i];
            if(ld<9){
                digits[i]++;
                return digits;
            }else if(ld==9){
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(),1);
       return digits;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna