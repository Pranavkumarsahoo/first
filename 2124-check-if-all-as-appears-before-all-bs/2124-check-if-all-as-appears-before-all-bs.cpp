class Solution {
public:
    bool checkString(string s) {
       bool check = false;
       for(int i = 0 ; i < s.size() ; i++){
           if(check){
            if(s[i]=='a')return false;
           }
           if(s[i]=='b')check=true;
       } 
       return true;
    }
};