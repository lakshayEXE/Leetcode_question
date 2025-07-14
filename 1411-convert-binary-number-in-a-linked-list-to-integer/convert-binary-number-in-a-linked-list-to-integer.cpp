/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       int length = 0;
       ListNode *temp = head;
       while(temp != NULL){
            length++;
            temp =temp->next;
       } 
       cout<<length;
        int sum = 0;
        int num = 0;
        temp = head;
       while(length){
            num = temp->val * pow(2,length-1);
            temp = temp->next;
            sum = sum + num;
            length--;
       }
       return sum;
    }
};