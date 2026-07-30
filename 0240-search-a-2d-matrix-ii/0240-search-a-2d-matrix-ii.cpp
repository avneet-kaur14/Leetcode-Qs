class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        int col=matrix[0].size()-1;
        while(row<matrix.size() && col>=0){
            int el=matrix[row][col];
            if(el==target){return true;}
            else if(target<el){col--;}
            else{row++;}
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna