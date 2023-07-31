//brute force approach 
//time O(n*n)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            
            int lsum=0;
            for(int j=0;j<i;j++){
                lsum+=nums[j];
            }
            int rsum=0;
            for(int j=i+1;j<nums.size();j++){
                rsum+=nums[j];
            }
            if(lsum==rsum) return i;
        }
        return -1;
    }
    
};

//optimal apparoach
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            if(lsum==sum) return i;
            lsum+=nums[i];
        }
        return -1;

    }
};

//best approach - using 1d prefix sum
//time O(n) , space O(n) for creating two extra arrays 
class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n=nums.size();
        vector<int>forward(n,0);
        vector<int>backward(n,0);
        forward[0]=nums[0];
        backward[n-1]=nums[n-1];

        for(int i=1;i<n;i++){
            forward[i]=forward[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--){
            backward[i]=backward[i+1]+nums[i];
        }

        for(int i=0;i<n;i++){
            if(forward[i]==backward[i]) return i;
        }
        return -1;


    }
};


