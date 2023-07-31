//merge intervals
//Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
//Output: [[1,6],[8,10],[15,18]]

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(res.empty() || res.back()[1] < intervals[i][0]){
                vector<int>tmp={
                    intervals[i][0],
                    intervals[i][1]
                };
                res.push_back(tmp);
            }
            else{
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
        }
        return res;
    }
};
