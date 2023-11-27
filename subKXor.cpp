#include<iostream>
#include<map>
using namespace std;
int subKXor(int arr[], int n, int k){
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int xr = 0;
            for(int k=i; k<=j; k++)
                xr = xr^arr[k];
            if(xr==k)
                cnt++;
        }
    }
    return cnt;
}
int subKXorBet(int arr[], int n, int k){
    int cnt = 0;
    for(int i=0; i<n; i++){
        int xr = 0;
        for(int j=i; j<n; j++){
            xr = xr^arr[j];
            if(xr==k)
                cnt++;
        }
    }
    return cnt;
}
int subKXorOpt(int arr[], int n, int k){
    int xr = 0;
    map<int, int> prexor;
    prexor[xr] = 1;
    int cnt = 0;
    for(int i=0; i<n; i++){
        xr = xr^arr[i];
        int x = xr^k;
        cnt += prexor[x];
        prexor[xr]++;
    }
    return cnt;
}
int main(){
    int arr[] = {4, 2, 2, 6, 4};
    cout<<subKXorOpt(arr, 5, 6);
}