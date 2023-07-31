//approach - for nums[i], calculate its left product and right product, store them in tables, and multiply both to generate the result.
//time O(n),space O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n),right(n),res;
        left[0]=right[n-1]=1;

        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }

        //result = leftarray * rightarray
        for(int i=0;i<n;i++){
            res.push_back(right[i]*left[i]);
        }
        return res;
        
    }
};
