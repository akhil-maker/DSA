#include<iostream>
#include<unordered_map>
using namespace std;
int longSubSum(int arr[], int n, int k){
    int sum = 0, mx = 0;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum==k)
            mx = max(mx, i+1);
        int rem = sum-k;
        if(m.find(rem)!=m.end()){
            int len = i-m[rem];
            mx = max(mx, len);
        }
        m[sum] = i;
    }
    return mx;
}
int subSumOpt(int arr[], int n, int k){
    int sum = arr[0], left = 0, right = 0, mxlen = 0;
    while(right<n){
        while(left<=right && sum>k){
            sum -= arr[left];
            left++;
        }
        if(sum==k)
            mxlen = max(mxlen, right-left+1);
        right++;
        if(right<n) sum += arr[right];
    }
    return mxlen;
}
int main(){
    int arr[] = {1, 2, 3, 1, 1, 1, 4, 2, 3};
    int n = 9, k = 3;
    cout<<longSubSum(arr, n, k)<<endl;
    cout<<subSumOpt(arr, n , k)<<endl;
}