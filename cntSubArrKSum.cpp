#include<iostream>
#include<map>
using namespace std;
int cntSubSum(int arr[], int n, int k){
    map<int, int> m;
    int presum = 0, cnt = 0;
    m[presum] = 1;
    for(int i=0; i<n; i++){
        presum += arr[i];
        int rem = presum-k;
        cnt += m[rem];
        m[presum]++;
    }
    return cnt;
}
int main(){
    int arr[] = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    cout<<cntSubSum(arr, 10, 3);
}