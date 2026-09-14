class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector <int> ans;
        int sr=0,sc=0;
        int er=m-1,ec=n-1;
        while(sr<=er && sc<=ec){
            for(int j=sc;j<=ec;j++){ //top
                ans.push_back(matrix[sr][j]);
        }
        
            for(int i=sr+1;i<=er;i++){
                ans.push_back(matrix[i][ec]);
        }
        

            for(int j=ec-1;j>=sc;j--){
                if(sr==er){
                    break;
                }
                ans.push_back(matrix[er][j]);
        }

            for(int i=er-1;i>sr;i--){
                if(sc==ec){
                    break;
                }
                ans.push_back(matrix[i][sc]);
        }
            sr++;
            er--;
            sc++;
            ec--;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna