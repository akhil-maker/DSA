#include<iostream>
using namespace std;
int missNum(int arr[], int n){
    int xr = 0;
    for(int i=1; i<=n; i++){
        xr = xr^i;
        if(i<n)
            xr = xr^arr[i-1];
    }
    return xr;
}
int main(){
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    cout<<missNum(arr, n);
}