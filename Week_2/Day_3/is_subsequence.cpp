class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int n1=t.size();
        if(n>n1){
            return false;
        }
        if(n==0){
            return true;
        }
        int k=0;
        for(int i=0;i<n1;i++){
            if(s[k]==t[i]){
                k++;
            }
            if(k==n){
                return true;
            }
        }
        return false;
    }
};
