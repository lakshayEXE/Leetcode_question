class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ans(26,0);
                if(s.length() != t.length()) return false;

        for( char it :s){
            ans[it -'a']++;
        }
        for( char it :t){
            ans[it -'a']--;
        }

        for(int i = 0 ; i<26 ;i++){
            if(ans[i] != 0){
                return false;
            }
        }
        return true;

    }
};