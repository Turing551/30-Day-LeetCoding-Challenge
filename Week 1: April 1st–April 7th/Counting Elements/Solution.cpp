class Solution {
public:
    int countElements(vector<int>& arr) {
        if(arr.size() <= 1){
            return 0;
        }
        sort(arr.begin(), arr.end());
        int x=0,y=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                y++;
            }else if(arr[i]==arr[i-1]+1){
                x+=y;
                y=1;
            }else{
                y=1;
            }
        }
        return x;
    }
};
