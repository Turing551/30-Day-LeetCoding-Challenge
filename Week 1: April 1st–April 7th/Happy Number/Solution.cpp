class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> us;
        int res;
        while(n!=1){           
            if(us.find(n) != us.end())return false;
            us.insert(n);           
            res=0;
            while(n){
                res += pow(n % 10, 2);
                n/=10;
            }
            n=res;       
        }   
        return true;
    }
};
