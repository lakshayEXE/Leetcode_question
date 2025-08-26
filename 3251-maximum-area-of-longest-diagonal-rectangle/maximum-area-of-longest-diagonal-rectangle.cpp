class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxi = INT_MIN;
        int length =0;
        int breadth = 0;
        int maxA = 0;
        for(int i= 0;i < dimensions.size() ;i++){
            double diag = sqrt((dimensions[i][0]  * dimensions[i][0]) + (dimensions[i][1] * dimensions[i][1]));
            if(maxi < diag){
                maxi = diag;
                length = dimensions[i][0];
                breadth = dimensions[i][1];
                maxA=length*breadth;
            }else if(maxi == diag){
                maxA= max(maxA,dimensions[i][0] * dimensions[i][1]);
            }
        }   
        return maxA;
    }
};