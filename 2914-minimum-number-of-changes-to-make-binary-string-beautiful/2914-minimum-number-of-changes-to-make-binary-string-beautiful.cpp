class Solution {
public:
    int minChanges(string s) {
       int n = s.size();
       int ans = 0;
       for(int i = 0 ; i < n-1 ; i++){
        if(s[i]!=s[++i])ans++;
       }
       return ans;
    }
};