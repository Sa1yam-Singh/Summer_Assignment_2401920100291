class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1=s.size();
        int n2=p.size();
        vector<int> answer;
        if (n1<n2) {
            return answer;
        }
        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);
        for (int i=0;i<n2;i++) {
            hash1[s[i]-'a']++;
            hash2[p[i]-'a']++;
        }
        if (hash1==hash2) {
            answer.push_back(0);
        }
        for (int i=n2;i<n1;i++) {
            hash1[s[i]-'a']++;
            hash1[s[i-n2]-'a']--;
            if (hash1==hash2) {
                answer.push_back(i-n2+1);
            }
        }
        return answer;
    }
};
