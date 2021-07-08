#include<iostream>
using namespace std;
void prefixSum(int a[], int n, int preSum[]){
    preSum[0] = a[0];
    for(int i=1; i<n; i++)
        preSum[i] = preSum[i-1]+a[i];
    for(int i=0; i<n; i++)
        cout<<preSum[i]<<" ";
}
int main(){
    int a[] = {10, 20, 10, 5, 15};
    int preSum[] = {-1, -1, -1, -1, -1};
    prefixSum(a, 5, preSum);
}