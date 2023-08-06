vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.

    int n=a.size();
    vector<int>ans(n,0);
    int posIndex=0,negIndex=1;
    for(int i=0;i<a.size();i++){
        if(a[i]>=0){
            ans[posIndex]=a[i];
            posIndex+=2;
        }
        else{
            ans[negIndex]=a[i];
            negIndex+=2;
        }
    }
    return ans;
    
}
