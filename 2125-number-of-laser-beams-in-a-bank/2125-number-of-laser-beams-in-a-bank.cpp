class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int temp1 = 0;
       for(int i = 0 ; i < bank.size() ; i++){
        int temp = 0;
        for(int j = 0 ; j < bank[0].size() ; j++){
            if(bank[i][j]=='1')temp++;
        }
        ans += temp1*temp;
        if(temp>0)temp1=temp;
       } 
       return ans;
    }
};