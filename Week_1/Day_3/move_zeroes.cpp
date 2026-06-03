class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        int tn=temp.size();
        for(int i=0;i<tn;i++){
            nums[i]=temp[i];
        }
        for(int i=tn;i<n;i++){
            nums[i]=0;
        }
        return nums;
    }
};
