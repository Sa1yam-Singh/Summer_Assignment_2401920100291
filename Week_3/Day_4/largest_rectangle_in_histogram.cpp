class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea=0;
        int pse,nse,index;
        for(int i=0;i<heights.size();i++){
            while(!st.empty()&&heights[st.top()]>heights[i]){
                index=st.top();
                st.pop();
                nse=i;
                if(st.empty()){
                    pse=-1;
                }
                else{
                    pse=st.top();
                }
                maxArea=max(heights[index]*(nse-pse-1),maxArea);
            }
            st.push(i);
        }
        while(!st.empty()){
            nse=heights.size();
            index=st.top();
            st.pop();
            if(st.empty()){
                pse=-1;
            }
            else{
                pse=st.top();
            }
            maxArea=max(heights[index]*(nse-pse-1),maxArea);
        }
        return maxArea;
    }
};
