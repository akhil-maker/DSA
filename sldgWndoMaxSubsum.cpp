#include<iostream>
using namespace std;
int maxSubsum(int a[], int n, int k){
    int i=0, j=0, sum = 0;
    int mx_sum = INT_MIN;
    while(i<n){
        if(i<k){
            sum += a[i];
            i++;
            continue;
        }   
        mx_sum = max(mx_sum, sum);
        sum -= a[j];
        sum += a[i];
        j++, i++;
    }
    return max(sum, mx_sum);
}
int main(){
    int a[] = {-1, 5, 0, -1, 3};
    cout<<maxSubsum(a, 5, 4);
}
