
vector<int> nextGreaterPermutation(vector<int> &A) {
    int ind=-1;
    int n=A.size();

    //find the break point 
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            ind=i;
            break;
        }
    }
    //if(ind==-1) it means its the last permutation of series,so reverrse it
    if(ind==-1){
        reverse(A.begin(),A.end());
        return A;
    }

    //find the number just greater than A[ind]
    for(int i=n-1;i>ind;i--){
        if(A[i]>A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }

    //place the remaining numbers in sorted way by reverse(ind+1,end)
    reverse(A.begin()+ind+1,A.end());
    return A;
}
