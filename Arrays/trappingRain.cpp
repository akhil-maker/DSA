#include<iostream>
using namespace std;
int maxtrapWater(int a[], int n){
    int left[n], right[n], water=0;
    left[0] = a[0];
    for(int i=1; i<n; i++)
        left[i] = max(left[i-1], a[i]);
    right[n-1] = a[n-1];
    for(int i=n-2; i>=0; i--)
        right[i] = max(right[i+1], a[i]);
    for(int i=0; i<n; i++)
        water += min(left[i], right[i])-a[i];
    return water;
}   
int main(){
    int a[] = {3, 0, 0, 2, 0, 4};
    cout<<maxtrapWater(a, 6);
}