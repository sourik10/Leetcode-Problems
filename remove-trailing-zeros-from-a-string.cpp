class Solution {
public:
    string removeTrailingZeros(string num) {
        reverse(num.begin(),num.end());
        int n=0;
        while(num[n]=='0') n++;
        num.erase(0,n);
        reverse(num.begin(),num.end());
        return num;
    }
};
