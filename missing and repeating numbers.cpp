vector<int> findMissingRepeatingNumbers(vector <int> a) {

    int n=a.size();
    long long sn=n*(n+1)/2;
    long long s2n=(n*(n+1)*(2*n+1))/6;

    long long s=0,s2=0;
    for(int i=0;i<n;i++){
        s+=(long long)a[i];
        s2+=(long long)a[i]*(long long)a[i];
    }

    long long val1=(s-sn); //x-y
    long long val2=(s2-s2n); //x^2 - y^2

    val2=val2/val1;

    long long x=(abs)(val2+val1)/2;
    long long y=(abs)(val1-x);
    return {(int)x,(int)y};

}
