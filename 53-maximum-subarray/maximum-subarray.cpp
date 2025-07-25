class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // int sumofsubarray = 0;
        // int maxi = INT_MIN;

        // for(int i= 0 ;i<nums.size() ; i++){
            
        //     sumofsubarray +=nums[i];
        //     maxi = max(sumofsubarray , maxi);

        //     if(sumofsubarray<0){
        //         sumofsubarray = 0;
        //     }
        
        // }

        // return maxi;

    // int subarray = 0 ;
    // int maxi = INT_MIN;
    // for(int i= 0 ; i<nums.size();i++){
    //     for(int j = i  ; j<nums.size() ;j++){
    //         subarray +=nums[j];
    //         maxi = max(maxi,subarray);
    //     }
    //     subarray = 0;
    // }
    //     return maxi;

    // int sum = 0;
    // int maxi =INT_MIN;

    // for(int i =0 ; i<nums.size() ; i++){
    //     sum+=nums[i];
       
    //     if(sum>maxi){
    //         maxi = sum;
    //     }
    //     if(sum<0){
    //         sum = 0;
    //     }
    // }
    //  return maxi;



//     int maxsum = INT_MIN;
//     int sum = 0;

//     for(int i = 0 ;i<nums.size() ; i++){
//             sum += nums[i];
//             maxsum  = max(maxsum , sum );

//         if(sum <0 ){
//             sum = 0;
//         }
//     }
//     return maxsum;
//     }

    // int sum = 0;
    // int maxsum = INT_MIN;

    // for(int i = 0 ; i<nums.size() ; i++){
    //     sum += nums[i];
    //     maxsum = max(maxsum,sum);
    //     if( sum < 0 ){
    //         sum = 0;
    //     }
    // }
    // return maxsum;
    // }

   int prevsum = 0;
   int maxi = INT_MIN;
   int sum =INT_MIN;
   for(int i = 0 ; i<nums.size() ;i++){
    if(sum>0){
        prevsum = sum;
        sum = prevsum + nums[i];
    }else{
        sum = nums[i];
    }
    maxi = max(maxi , sum);
   }
   return maxi;
}    
};


