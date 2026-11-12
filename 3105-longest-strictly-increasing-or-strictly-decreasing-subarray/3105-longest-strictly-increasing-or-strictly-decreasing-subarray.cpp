class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return n;
        int IncLen=INT_MIN,DecLen=INT_MIN;
        
        int i=0,j=1;
        while(i<n && j<n){
            if(arr[j-1]<arr[j])IncLen=max(IncLen,j-i+1);
            else i=j;
            j++;
        }
         i=0,j=1;
        while(i<n && j<n){
            if(arr[j-1]>arr[j])DecLen=max(DecLen,j-i+1);
            else i=j;
            j++;
        }
        int ans=max(IncLen,DecLen);
        if(ans==INT_MIN) return 1;
        return ans;
    }
};