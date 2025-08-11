class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size =0;
        for(int i = 0 ; i < s.length() ; i++){
            unordered_set<char> mp;
            for(int j = i; j<s.length() ; j++){
               if(mp.find(s[j]) != mp.end() ){
                break;
               }
                mp.insert(s[j]);
            }
            size = max(size, (int)mp.size());
        }
        // for(auto &it : mp){
        //      cout<<(char)it<< " ";
        // }
       
        return size;
    }
};   