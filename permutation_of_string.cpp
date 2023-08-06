#include<bits/stdc++.h>
void solver(string &str,vector<string>&ans,int ind){
    if(ind==str.size()){
        ans.push_back(str);
        return;
    }
    
    for(int i=ind;i<str.size();i++){
        swap(str[i],str[ind]);
        solver(str,ans,ind+1);
        swap(str[i],str[ind]);
    }
}
vector<string> generatePermutations(string &str)
{
    vector<string>res;
    sort(str.begin(),str.end());
    solver(str,res,0);
    sort(res.begin(),res.end());
    return res;
}
