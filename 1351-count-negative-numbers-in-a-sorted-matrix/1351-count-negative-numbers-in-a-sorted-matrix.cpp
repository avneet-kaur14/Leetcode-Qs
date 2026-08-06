class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int count=0;
        int i=0,m=grid.size();
        int j=grid[0].size()-1;
        while(i<m && j>=0){
            if(grid[i][j]<0){
                count+=(m-i);
                j--;
            }else if(grid[i][j]>=0){
                i++;
            }

        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna