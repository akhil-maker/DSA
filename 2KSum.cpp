#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int K2Sum(int arr[], int n, int k){
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        int rem = k-arr[i];
        if(m.find(rem)!=m.end())
            return true;
        m[arr[i]] = i;
    }
    return false;
}
pair<int, int> pairSum(int arr[], int n, int k){
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        int rem = k-arr[i];
        if(m.find(rem)!=m.end())
            return {i, m[rem]};
        m[arr[i]] = i;
    }
    return {-1, -1};
}
bool K2SumPtr(int arr[], int n, int k){
    sort(arr, arr+n);
    int left = 0, right = n-1;
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum<k)
            left++;
        else if(sum>k)
            right--;
        else 
            return true;
    }
    return false;
}
int main(){
    int arr[] = {2, 6, 5, 8, 11};
    int n = 5, k = 14;
    cout<<K2Sum(arr, n, k)<<endl;
    pair<int, int> p = pairSum(arr, n, k);
    cout<<p.first<<" "<<p.second<<endl;
    cout<<K2SumPtr(arr, n, k);
}