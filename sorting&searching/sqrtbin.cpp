#include<iostream>
using namespace std;
long long int sqrt(long long int n){
    if(n==0 || n==1)
        return n;
    int low = 1, high = n, mid;
    while(low<=high){
        mid = (low+high)/2;
        if(mid*mid==n)
            return mid;
        else if(mid*mid<n)
            low = mid+1;
        else
            high = mid-1;
    }
    if(mid==n || mid*mid>n)
        mid = mid-1;
    return mid;
}
int main(){
    for(int i=0; i<=10; i++)
        cout<<sqrt(i)<<" ";
}