#include<iostream>
using namespace std;
//O(sqrt(n)) - O(log n)
int sqrtNum(int n){
    for(int i=0; i<=n; i++){
        if(i*i==n)
            return i;
        else if(i*i>n)
            return i-1;
    }
    return -1;
}
//O()
int sqrtNum1(int n){
    if(n==0 || n==1)
        return n;
    int low = 1, high = n, ans;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid==n)
            return mid;
        if(mid*mid<n){
            low = mid+1;
            ans = mid;
        }
        else
            high = mid-1;
    }
    return ans;
}
int main(){
    for(int i=0; i<=10; i++){
        cout<<sqrtNum(i)<<" ";
        cout<<sqrtNum1(i)<<endl;
    }
}