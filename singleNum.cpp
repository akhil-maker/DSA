#include<iostream>
using namespace std;
int missNum(int arr[], int n){
    int xr = 0;
    for(int i=0; i<n; i++)
        xr = xr^arr[i];
    return xr;
}
int main(){
    int arr[] = {1, 2, 2, 1, 4, 5, 4};
    int n = 7;
    cout<<missNum(arr, n);
}