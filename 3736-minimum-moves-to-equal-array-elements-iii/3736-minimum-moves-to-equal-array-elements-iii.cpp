class Solution {
public:
    int minMoves(vector<int>& nums) {
       int ans = 0 ;
       int n = nums.size();
       int maxi = INT_MIN;
       for(int i = 0 ; i < n ; i++ ){
            maxi = max(maxi,nums[i]);
            ans += nums[i];
       } 
       return n*maxi - ans;

    }
};