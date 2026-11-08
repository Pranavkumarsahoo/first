class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int ans = 0 ;
        int n = grid.size();
        int m = grid[0].size();
       for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
        if(grid[i][j]==1){
        bool flag = false;
        for(int k = 0 ; k < n ; k++){
           if(k!=i) if(grid[k][j]==1)flag=true;
        }
        for(int k = 0 ; k < m ; k++){
           if(k!=j) if(grid[i][k]==1)flag=true;
        }
        if(flag==true)ans++;
        }}} 
        return ans;
    }
};