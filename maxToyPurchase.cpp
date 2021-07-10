#include<iostream>
#include<algorithm>
using namespace std;
//O(nlog n), O(1), sorting is used here
int findMaxItems(int a[], int n, int k){
    if(n==0 || k==0)
        return 0;
    int ans = 0, i=0;
    sort(a, a+n); //O(nlogn)
    while(i<n && k>a[i]){
        ans++;
        k = k-a[i];
        i++;
    }
    return ans;
}
int main(){
    int a[] = {1, 12, 5, 111, 200, 100, 10, 9, 12, 15};
    cout<<findMaxItems(a, 10, 50);
}