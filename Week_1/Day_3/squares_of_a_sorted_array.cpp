class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums1(n);
        int low=0;
        int high=n-1;
        int k=n-1;;
        while(low<=high){
            if(nums[low]*nums[low]>nums[high]*nums[high]){
                nums1[k]=nums[low]*nums[low];
                low++;
                k--;
            }
            else{
                nums1[k]=nums[high]*nums[high];
                high--;
                k--;
            }
        }
        return nums1;
    }
};
