class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int len=1;len<=n/2;len++){
        if(n%len!=0){
            continue;
        }
        string s1 = "";
        string s2 = "";
        for (int i=0;i<len;i++){
            s1+= s[i];
        }
        int t=n/len;
        for(int i=0;i<t;i++){
            s2+=s1;
        }
        if (s2==s){
            return true;
        }
        }
        return false;
    }
};
