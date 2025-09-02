class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
           int rem = num%10;
           int newNum = num/10;

           num = rem +newNum;
        }

        return num;
    }
};