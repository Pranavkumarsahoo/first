class Solution {
   vector<int> ans(vector<int> nums ){
    int n = nums.size();
    if(n==1)return nums;
    vector<int>t(n-1);
    for(int i = 0 ; i < n-1 ; i++){
        t[i]=(nums[i]+nums[i+1])%10;
    }
      return ans(t);
   }
public:
    int triangularSum(vector<int>& nums) {
      vector<int>ok = ans(nums);
      return ok[0];  
    }
};