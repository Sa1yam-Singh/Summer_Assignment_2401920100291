class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash1[26]={0};
        int hash2[26]={0};
        for(int i=0;i<magazine.size();i++){
            hash1[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            hash2[ransomNote[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash1[i]<hash2[i]){
                return false;
            }
        }
        return true;
    }
};
