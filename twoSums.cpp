//brute force appraoch , time complexity O(n*n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};


//approach - Two pointer 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>rs;
        for(int i=0;i<nums.size();i++){
            rs.push_back(make_pair(nums[i],i));
        }
        sort(rs.begin(),rs.end());
        int l=0,h=nums.size()-1;
        while(l<=h){
            if(rs[l].first+rs[h].first==target) return {rs[l].second,rs[h].second};
            else if(rs[l].first+rs[h].first < target) l++;
            else h--;
        }
        return {-1,-1};
    }
};
