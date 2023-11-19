#include<iostream>
using namespace std;
int missNum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n-1; i++)
        sum += arr[i];
    return (n*(n+1))/2 - sum;
}
int main(){
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    cout<<missNum(arr, n);
}