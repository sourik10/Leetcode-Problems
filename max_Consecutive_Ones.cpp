class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int tmp_max=0;
        int max_ones=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) tmp_max++;
            else tmp_max=0;
            
            if(tmp_max > max_ones) max_ones=tmp_max;
        }
        return max_ones;
    }
};
