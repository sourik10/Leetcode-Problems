
//approach 1 - using two pointer appraoch
int longestSubarrayWithSumK(vector<int> a, long long k) {  

    int left=0;
    int right=0;
    int maxLength=0;
    long long sum=a[0];
    int n=a.size();

    while(right<n){
        while(left<=right && sum>k){
            sum=sum-a[left];
            left++;
        }

        if(sum==k){
            maxLength=max(maxLength,right-left+1);
        }

        right++;
        if(right<n){
            sum+=a[right];
        }
    }
    return maxLength;
    
}

//appraoch - using hashmap
#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
   int n=a.size();
   map<long long,int>mp;
   long long sum=0;
   int maxlength=0;
   for(int i=0;i<a.size();i++){
       sum+=a[i];
   
   if(sum==k) maxlength=max(maxlength,i+1); 
   
   long long rem=sum-k;
   if(mp.find(rem)!=mp.end()){
       int len=i-mp[rem];
       maxlength=max(maxlength,len);
   }
   if(mp.find(sum)==mp.end()){
       mp[sum]=i;
   } }
   return maxlength;
   
}
