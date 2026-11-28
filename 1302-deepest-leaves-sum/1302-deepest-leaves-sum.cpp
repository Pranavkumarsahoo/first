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
int maxi(TreeNode* root){
    if(root==nullptr)return 0;
    int left=maxi(root->left);
    int right=maxi(root->right);
    return max(left,right)+1;
}
  void ans(TreeNode* root , int &sum , int depth , int depth1){
    if(root==nullptr)return; 
    ans(root->left,sum,depth,depth1+1);
    if(depth==depth1)sum+=root->val;
    ans(root->right,sum,depth,depth1+1);
    

  }
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0 ;
        int depth=maxi(root)-1;
        ans(root,sum,depth,0);
        return sum;
    }
};