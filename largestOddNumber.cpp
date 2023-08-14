class Solution {
public:
    string largestOddNumber(string nums) {
        int last=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                last =i;
            }
        }
        if(last!=-1) return nums.substr(0,last+1);
        return "";
    }
};
