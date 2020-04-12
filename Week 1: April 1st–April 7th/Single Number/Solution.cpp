class Solution {
public:
    int singleNumber(vector<int>& a) {
        int n = 0;    
        for(int i : a){
            n ^= i;
        }    
        return n;
    }
};
