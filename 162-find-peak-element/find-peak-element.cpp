class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() -1;
        int mid = (start + end)/2;
        
        while( start < end ){
            // if(mid == start) return mid;
            // if(mid == 0 ){
            //     return mid;
            // }
            if( (mid-1 >= 0) && nums[mid] > nums[mid-1]  &&
                (mid+1 <= nums.size()-1) && nums[mid] > nums[mid+1] ){
                return mid;
            }else if(nums[mid] < nums[mid+1] ){
                start = mid+1;
            }else{
                end = mid-1;
            }
            mid = (start + end)/2;
        }
        return mid;
    }
};