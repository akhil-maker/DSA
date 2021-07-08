#include<iostream>
using namespace std;
int rangeSum(int a[], int s, int e, int n){
    for(int i=1; i<n; i++)
        a[i] = a[i]+a[i-1];
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return a[e-1]-a[s-1];
}
int main(){
    int a[] = {10, 20, 30, 5, 15};
    cout<<rangeSum(a, 2, 4, 5);
}