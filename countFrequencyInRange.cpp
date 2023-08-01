vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int>ans;
    vector<int>tmp(n+1,0);
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=nums.size()){
            tmp[nums[i]]++;
        }
    }
    for(int i=1;i<=n;i++){
        ans.push_back(tmp[i]);
    }
    return ans;
}
