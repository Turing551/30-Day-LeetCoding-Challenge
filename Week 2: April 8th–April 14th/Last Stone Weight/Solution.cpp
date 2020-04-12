class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> que;
        for(int& i : stones) que.push(i);
        while(que.size() != 1 && !que.empty()) {
            int x=que.top();
            que.pop();
            int y=que.top();
            que.pop();
            if(y==x) continue;
            else que.push(x-y);
        }
        if(que.empty()) return 0;
        return que.top();
    }
};
