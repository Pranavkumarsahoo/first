class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int ans = 0;
        int k = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 1) {
                k = -k;
            }
             if(i % 6 == 5) {
                k = -k;
            }
            ans += k * nums[i];
        }
        return ans;
    }
};