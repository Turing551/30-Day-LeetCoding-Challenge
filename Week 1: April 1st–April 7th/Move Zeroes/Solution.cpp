class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[++x],nums[i]);
            }   
        }
    }
};
