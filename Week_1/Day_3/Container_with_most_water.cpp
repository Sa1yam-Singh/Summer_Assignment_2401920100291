class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxarea=0;
        int low=0;
        int high=n-1;
        while(low<high){
            maxarea=max((high-low)*(min(height[low],height[high])),maxarea);
        if(height[low]>height[high]){
            high--;
        }
        else{
            low++;
        }
        }
        return maxarea;
    }
};
