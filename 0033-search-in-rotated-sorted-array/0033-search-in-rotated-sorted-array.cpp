class Solution {
public:
    int search(vector<int>& arr, int target) {
        int st=0,end=arr.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(arr[mid]==target){
                return mid;
            }

            if(arr[st]<=arr[mid]){ //left half sorted
                if(target<arr[mid] && target>=arr[st]){ //target in left half
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }else{ //right half sorted
                if(target>arr[mid] && target<=arr[end]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna