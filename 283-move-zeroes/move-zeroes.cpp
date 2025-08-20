class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int j = 0;
     int i = 0;
    while(i<nums.size() && j <nums.size()){
        if(nums[j] == 0 ){
            j++;
        }else{
            swap(nums[i],nums[j]);
            j++;
            i++;
        }
    }

    }
};