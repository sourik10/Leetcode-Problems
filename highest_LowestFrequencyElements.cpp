#include<bits/stdc++.h>
vector<int> getFrequencies(vector<int>& v) {
  
   map<int,int>mp;
   for(int i=0;i<v.size();i++) mp[v[i]]++;
   
   pair<int,int>maxF={v[0],0};
   pair<int,int>minF={v[0],v.size()};
   for(auto it=mp.begin();it!=mp.end();it++){
       if(it->second > maxF.second){
           maxF.second=it->second;
           maxF.first=it->first;
       }
       if((it->second!=0)&&(it->second < minF.second)){
           minF.second=it->second;
           minF.first=it->first;
       }
       
   }
   vector<int>ans;
   ans.push_back(maxF.first);
   ans.push_back(minF.first);
   return ans;
    
}
