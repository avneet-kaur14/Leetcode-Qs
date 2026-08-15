class Solution {
public:
    // int solve(int m,int n,int r,int c){
    //     if(r==m-1 && c==n-1){
    //         return 1;
    //     }
    //     if(r>=m || c>=n){
    //         return 0;
    //     }

    //     return solve(m,n,r+1,c)+solve(m,n,r,c+1);
    // }
    // int uniquePaths(int m, int n) {
    //     int ans=solve(m,n,0,0);
    //     return ans;
    // }
    int uniquePaths(int m,int n){
        long long int ans=1;
        int total=m+n-2;
        int r=min(m-1,n-1);
        for(int i=1;i<=r;i++){
            ans=ans*(total-r+i)/i;
        }
        return ans;
    }


};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna