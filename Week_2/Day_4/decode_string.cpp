class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=']'){
                st.push(s[i]);
            }
            else{
                string substr;
                while(!st.empty() && st.top()!='['){
                    substr.push_back(st.top());
                    st.pop();
                }
                st.pop();
                string k;
                while(!st.empty() && isdigit(st.top())){
                    k.push_back(st.top());
                    st.pop();
                }
                reverse(substr.begin(), substr.end());
                reverse(k.begin(), k.end());
                int n=stoi(k);
                while(n--){
                    for(int i=0;i<substr.size();i++){
                        st.push(substr[i]);
                    }
                }
            }
        }
        string ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
