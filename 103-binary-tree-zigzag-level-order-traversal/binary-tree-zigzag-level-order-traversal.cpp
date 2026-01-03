/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL) return ans ;
        queue<TreeNode*> q;
        q.push(root);
        bool flag = false;
        while(!q.empty()){
            int size = q.size();
            vector<int>levels;

            for(int i= 0; i < size ;i++){
                TreeNode* d = q.front();
                q.pop();
                levels.push_back(d->val);
                if(d->left) q.push(d->left);
                if(d->right) q.push(d->right);
                
            }
            if(flag){
                reverse(levels.begin(),levels.end());
                }
            flag = !flag;
            ans.push_back(levels);
        }
        return ans;
    }
};