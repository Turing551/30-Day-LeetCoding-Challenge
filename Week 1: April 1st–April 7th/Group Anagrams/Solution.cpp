class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()){
            return {};
        }
        unordered_map<string, vector<string>>x;       
        for(const string& s : strs){
            string str = s;
            sort(str.begin(), str.end());
            x[str].emplace_back(s);
        }      
        vector<vector<string>> y;
        for(const auto& pair : x){
            y.emplace_back(pair.second);
        }   
        return y;
    }
};
