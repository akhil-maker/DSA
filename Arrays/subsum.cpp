//subarray sum
#include<iostream>
using namespace std;
int subsum(int a[], int n, int x){
    int curr_sum = a[0], start = 0, i;
    for(i=1; i<=n; i++){
        while(curr_sum>x && start<i-1){
            curr_sum = curr_sum-a[start];
            start++;
        }
        if(curr_sum==x){
            cout<<"get the sum between "<<start<<" and "<<i-1<<endl;
            return 1;
        }
        if(i<n)
            curr_sum = curr_sum+a[i];
    }
    cout<<"No subarray found ";
    return 0;
}
int main(){
    int a[] = {15, 2, 4, 8, 9, 5, 10, 23};
    subsum(a, 8, 23);
}