class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int x=0,y=0;
        bool check=true;       
        for(const int& num : nums){
            y+=num;
            if(y<0){
                y=0;
            }if(y>x){
                x=y;
                check=false;
            }
        }      
        return (check) ? *max_element(nums.begin(), nums.end()) : x;
    }
};
