class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n=grid.size();
        long long N=1LL * n * n;
        long long eSum = N * (N+1) / 2;
        long long eSqSum= N * (N+1) * (2*N + 1) / 6;
        long long aSum=0 , aSqSum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                long long k=grid[i][j];
                aSum+=k;
                aSqSum+= k * k;
            }
        }

        long long diff= aSum-eSum;
        long long diffSq= aSqSum - eSqSum;

        long long sum= diffSq/diff;

        long long r= (sum+diff) / 2;
        long long m= (sum-diff) / 2;

        return {(int)r , (int)m};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna