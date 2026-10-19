class Solution {
public:
    string reverseWords(string str) {
        int i=0,j=0,n=str.length();
        reverse(str.begin(),str.end());
        while(i<n){
            if(i<n && str[i]!=' '){
                str[j++]=str[i++];
            }else{
                while(i<n && str[i]==' '){
                    i++;
                }
                if(i<n && j>0){
                    str[j++]=' ';
                }
            }
        }
        str.resize(j);
        n = str.size();
        int st=0;
        while(st<n){
            while(st<n && str[st]==' '){
                st++;
            }
            int ws=st; //start of word
            int we=ws;
            while(we<n && str[we]!=' '){
                we++;
            }
            reverse(str.begin()+ws , str.begin() + we);
            st=we;
        }
        return str;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna