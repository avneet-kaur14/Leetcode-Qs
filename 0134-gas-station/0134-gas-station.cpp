class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0 , currGas=0 , st=0;

        for(int i=0;i<gas.size();i++){
            int net=gas[i]-cost[i];
            totalGas+=net;
            currGas+=net;

            if(currGas<0){
                st=i+1;
                currGas=0;
            }
        }
        if(totalGas<0){
            return -1;
        }
        return st;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna