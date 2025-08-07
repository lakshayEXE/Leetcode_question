class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int>square;
        // for(int i = 0 ; i<nums.size() ;i++){
        //      square.push_back(nums[i]*nums[i]);
        // }
        // sort(square.begin() , square.end());
        // //reverse(square.begin() , square.end());
        // return square;

        vector<int>ans(nums.size());
        int left = 0;
        int right = nums.size()-1;

        for(int i = nums.size()-1 ; i>=0 ; i--){
            int val =0;
            if(abs(nums[left]) > abs(nums[right])){
                val = nums[left];
                left++;
            }else{
                val = nums[right];
                right--;
            }
            ans[i] = val*val;
        }
        return ans;
    }
};