#include<iostream>
using namespace std;
int subMaxProd(int arr[], int n){
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        int prod = 1;
        for(int j=i; j<n; j++){
            prod = prod*arr[j];
            mx = max(mx, prod);
        }
    }
    return mx;
}
int subMaxProdOpt(int arr[], int n){
    int pre = 1, suff = 1, mx = INT_MIN;
    for(int i=0; i<n; i++){
        if(pre==0) pre = 1;
        if(suff==0) suff = 1;
        pre = pre*arr[i];
        suff = suff*arr[i];
        mx = max(mx, max(pre, suff));
    }
    return mx;
}
int main(){
    int arr[] = {2, 3, -2, 4}, n = 4;
    cout<<subMaxProdOpt(arr, n);
}