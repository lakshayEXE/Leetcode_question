class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int l = 0, r = 0, len, maxlen = 0;
        vector<int> hash(256, -1);  
        int n = s.length();

        while(r<n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >=l){
                    l = hash[s[r]]+1;
                }
            }
            len=r-l+1;
            maxlen = max(len,maxlen);
            hash[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};