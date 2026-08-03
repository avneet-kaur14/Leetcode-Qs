class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i=0;
        while(i<letters.size()){
            if(letters[i]>target){
                return letters[i];
            }
            i++;
        }
        return letters[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna