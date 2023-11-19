#include<iostream>
using namespace std;
int mxConsOnes(int arr[], int n){
    int one = 0, mx = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==1)
            one++;
        mx = max(mx, one);
        if(arr[i]==0)
            one = 0;
    }
    return mx;
}
int main(){
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = 9;
    cout<<mxConsOnes(arr, n);
}