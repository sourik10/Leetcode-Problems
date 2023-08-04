class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int x=nums[0];
       for(int i=1;i<nums.size();i++) x=x^nums[i];
       int y=0;
       for(int i=1;i<=nums.size();i++) y=y^i;
       return x^y;
    }
};
