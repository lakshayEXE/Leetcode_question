class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";
        for(int i =0 ; i<s.length(); i++){
            if(isalnum(s[i])){
                newstr += tolower(s[i]);
            }
        }
        int p1=0;
        int p2 = newstr.length()-1;

        while(p1 < p2){
            if(newstr[p1] != newstr[p2]){
                return false;
            }
            p1++;
            p2--;
        }
        return true;
    }
};