class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }

        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1){
                return i;
            }
        }
        return -1;


        //VARIATION OF QUES-TO RETURN CHAR FOR WHOLE STREAM
        // queue<char> q;
        // for(int i=0;i<s.size();i++){
        //     freq[s[i]-'a']++;
        //     q.push(s[i]);

        //     while(!q.empty() && freq[q.front()-'a']>1){
        //         q.pop();
        //     }

        //     if(q.empty()){
        //         cout<<"-1\n";
        //     }else{
        //         cout<<q.front()<<endl;
        //     }            
        // }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna