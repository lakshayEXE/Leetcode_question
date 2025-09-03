class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        // stack<string>st;
        // int count=0;
        // int maxi=0;
        // for(int i = 0; i< sentences.size() ;i++){
        //     for(int j =0 ; j<sentences.size() ; j++){
        //         if(sentences[i][j] != ' '){
        //             string word += sentences[i][j];
        //         }else{
        //             st.push(word);
        //         }
        //     }
        //     while(st.empty()){
        //         st.pop();
        //         count++;
        //         maxi = max(count,maxi);
        //     }
        // }
        // return maxi;
        int maxi = 0;
        int count=0;
        for(int i = 0 ;i<sentences.size() ; i++){
            for(int j = 0 ; j<sentences[i].size() ;j++){
                if(sentences[i][j] == ' '){
                    count++;
                    maxi = max(maxi,count);
                }                
            }
            count=0;
        }
        return maxi+1;
    }
};