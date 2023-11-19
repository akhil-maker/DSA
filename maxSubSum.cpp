#include<iostream>
using namespace std;
int maxSubSum(int arr[], int n){
    int sum = 0, mx = INT_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum>mx)
            mx = sum;
        if(sum<0)
            sum = 0;
    }
    return mx;
}
int printMaxSumArr(int arr[], int n){
    int start = 0, ansEnd = 0, sum = 0, mx = INT_MIN, ansStart;
    for(int i=0; i<n; i++){
        if(sum==0)
            start = i;
        sum += arr[i];
        if(sum>mx){
            ansStart = start, ansEnd = i;
            mx = sum;
        }
        if(sum<0)
            sum = 0;
    }
    for(int i=ansStart; i<=ansEnd; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return mx;
}
int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<maxSubSum(arr, 8)<<endl;
    cout<<printMaxSumArr(arr, 8)<<endl;
}
