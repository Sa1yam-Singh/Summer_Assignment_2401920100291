class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int maxlength=1;
        int n=s.size();
        for(int i=0;i<n;i++){
            //for even length
                int left=i;
                int right=i+1;
                while(left>=0 && right<n && s[left]==s[right]){
                    if (right-left+1>maxlength) {
                        maxlength=right-left+1;
                        start=left;
                    }
                    left--;
                    right++;
            }
            //for odd length
                 left=i;
                 right=i;
                while(left>=0 && right<n && s[left]==s[right]){
                    if (right-left+1>maxlength) {
                        maxlength=right-left+1;
                        start=left;
                    }
                    left--;
                    right++;
                }
        }
        return s.substr(start,maxlength);
    }
};
