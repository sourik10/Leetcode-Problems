int merge(vector<int>&a,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    int count=0;

    while(left<=mid&& right<=high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }

        else{
            temp.push_back(a[right]);
            count+=(mid-left+1);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }

    //copy value to first array
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }

    return count;
}

int mergeSort(vector<int>&a,int low,int high){
    int ct=0;
    if(low>=high) return ct;
    int mid=(low+high)/2;
    ct+=mergeSort(a,low,mid);
    ct+=mergeSort(a,mid+1,high);
    ct+=merge(a,low,mid,high);
    return ct;
}
int numberOfInversions(vector<int>&a, int n) {
    return mergeSort(a,0,n-1);

}
