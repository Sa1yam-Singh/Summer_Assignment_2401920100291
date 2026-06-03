class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> nums1;
        for(int i=0;i<nums.size();i++){
            nums1.push_back(nums[i]*nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums1[i]>nums1[j]){
                    int temp=nums1[i];
                    nums1[i]=nums1[j];
                    nums1[j]=temp;
                }
            }
        }
        return nums1;
    }
};