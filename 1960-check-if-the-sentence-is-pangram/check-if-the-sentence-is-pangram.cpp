class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[27];

        for(int i = 0 ; i<sentence.size() ;i++){
            int ch = sentence[i] - 'a'+1;
            arr[ch] =1;
        }
        for(int i =1 ; i<27 ;i++){
            if(arr[i] == 0) return false;
        }
        return true;
    }
};