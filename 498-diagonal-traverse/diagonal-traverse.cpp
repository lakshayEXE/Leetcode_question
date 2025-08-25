class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        // int n = mat.size();
        // int m = mat[0].size();
        // int flag = true;
        // // vector<vector<int>>ans;
        // int i = 0;
        // int j = 0;
        // vector<int>diagonal;

        // while(i<n){
        //   flag = !flag;
        //   while(j>0){
        //     diagonal.push_back(mat[i][0]);
        //     i++;
        //     j--;
        //   }


        // }

        // return diagonal;

        vector<int>ans;
        map<int,vector<int>>mp;

        for(int i = 0 ; i< mat.size() ;i++){
            for(int j = 0 ; j<mat[0].size() ;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }

        bool flag = false;
        for(auto &it : mp){
            if(!flag){
                reverse(it.second.begin() , it.second.end());
            }
            for(int &nums : it.second){
                ans.push_back(nums);
            }
            flag = !flag;
        }
        return ans;

    }
};