//binary search approach
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>rs(n);
        int l=0,h=n-1;
        for(int k=n-1;k>=0;k--){
                if(abs(nums[h]) > abs(nums[l])) rs[k]=nums[h]*nums[h--];
                else rs[k]=nums[l]*nums[l++];
        }
        return rs;
    }
};

