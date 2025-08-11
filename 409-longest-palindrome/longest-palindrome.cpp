class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int>mp;
       
       for(auto it : s){
          mp[it]++;  
       }
        int res =0;
        bool flag =0;
       for(auto& entry : mp){
          int freq = entry.second;
          if(freq%2==0){
            res +=freq;
          }else{
            res+=freq-1;
            flag =1;
          }
       }
       if(flag ) return res+1;

       return res;
    }
};