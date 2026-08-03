class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int i=0;
        // while(i<letters.size()){
        //     if(letters[i]>target){
        //         return letters[i];
        //     }
        //     i++;
        // }
        // return letters[0];

        int st=0,end=letters.size()-1,ans=letters[0];

        while(st<=end){
            int mid=st+(end-st)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna