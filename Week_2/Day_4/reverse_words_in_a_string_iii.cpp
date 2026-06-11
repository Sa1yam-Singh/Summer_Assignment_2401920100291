class Solution {
public:
    string reverseWords(string s) {
       int n=s.size();
       int j=0;
       for(int i=0;i<n;i++){
        if(s[i]==' '|| i==n-1){
            int temp_l=j;
            int temp_r=i-1;
            if(i==n-1){
                temp_r=i;
            }
            while(temp_l<temp_r){
                int temp=s[temp_l];
                s[temp_l]=s[temp_r];
                s[temp_r]=temp;
                temp_l++;
                temp_r--;
            }
            j=i+1;
        }
       }
       return s;
    }
};
