#include<iostream>
#include<vector>
using namespace std;
vector<int> repMissNums(int arr[], int n){
    long long int sum = 0, sqsum = 0, sn = n*(n+1)/2, s2n = n*(n+1)*(2*n+1)/6;
    for(int i=0; i<n; i++){
        sum += arr[i];
        sqsum += arr[i]*arr[i];
    }
    long long val1 = sum - sn, val2 = sqsum - s2n;
    val2 = val2/val1;
    long long x = (val1+val2)/2;
    long long y = x-val1;
    vector<int> v = {(int)x, (int)y};
    return v;
}
int main(){
    int arr[] = {4, 3, 6, 2, 1, 1};
    vector<int> r = repMissNums(arr, 6);
    cout<<r[0]<<" "<<r[1];
}