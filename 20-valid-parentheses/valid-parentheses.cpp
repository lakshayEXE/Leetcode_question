class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i = 0  ; i<s.length() ;i++){
            char ch = s[i];
            if(ch =='(' || ch =='{' || ch =='['){
                st.push(ch);
            }else{
                if( !st.empty() && ((ch == ')' && st.top() =='(') ||
                                   (ch == '}' && st.top() =='{') ||
                                   (ch == ']' && st.top() =='[') )){
                                     st.pop();
                                   }
                else{
                    return false;
                }
            }
        }

        if(st.empty()) return true;
        return false;
    }
};