class Solution {
public:


        ///BRUTE FORCE APPROCH

    //     for(int i = 0; i<nums.size() ; i++ ){   
    //         int count=0;         
    //         for( int j = 0 ; j <nums.size() ; j++){
    //             if(nums[j]==nums[i]){
    //                 count++;
    //             }

    //         }
    //         if(count >(nums.size()/2)) return nums[i];
    //     }
    //     return -1;

    // }


        ///BETTER APPROCH 

        // map<int, int > mpp;

        // for( int i =0 ; i<nums.size() ; i++){
        //     mpp[nums[i]]++;
        // }

        // for( auto it : mpp){
        //     if ( it.second > (nums.size()/2 )){
        //         return it.first;
        //     }
        // }
        // return -1;
        // }
        
        ///MOORE VOTING ALGO

    int majorityElement(vector<int>& nums) {
    // int cnt =0; 
    // int el;

    // for(int i = 0 ; i<nums.size() ; i++){

    //     if(cnt==0){
    //         cnt=1;
    //         el=nums[i];
    //     }

    //     else if ( nums[i] == el){
    //         cnt++;
    //     }
    //     else cnt--;
    // }
    // return el;  


    // int cnt=0;
    // int element = 0;

    // for(int i= 0 ; i< nums.size() ;i++){
    //     if(cnt == 0){
    //         element = nums[i];
    //         cnt=1;
    //     }else if(element == nums[i]){
    //         cnt++;
    //     }else{
    //         cnt--;
    //     }
    // }
    // return element;










        int num = nums[0];
        int cnt = 1;
        for(int i = 1 ; i<nums.size() ;i++){
            if(cnt == 0){
                num = nums[i];
            }
            if(num == nums[i]){
                cnt++;
            }else{
                cnt--;

            }
        }
        return num;


    }
};
