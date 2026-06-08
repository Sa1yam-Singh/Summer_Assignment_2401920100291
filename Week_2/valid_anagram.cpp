class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int hash1[26]={0};
        int hash2[26]={0};
        for(int i=0;i<s.size();i++){
            hash1[s[i]-'a']+=1;
            hash2[t[i]-'a']+=1;
        }
        for(int i=0;i<26;i++){
            if(hash1[i]!=hash2[i]){
                return false;
            }
        }
        return true;
    }
};
