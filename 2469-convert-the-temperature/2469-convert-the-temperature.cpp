class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double k=celsius+273.15;
        double f=celsius * 1.80 +32.00;
        ans.push_back(k);
        ans.push_back(f);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna