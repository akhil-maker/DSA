#include<iostream>
using namespace std;
int firstRepeated(int arr[], int n) {
        //code here
    int idx[100007];
    for(int i=0; i<100007; i++)
        idx[i] = -1;
    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]]!=-1)
            minidx = min(minidx, idx[arr[i]]);
        else
            idx[arr[i]] = i;
    }
    if(minidx==INT_MAX)
        return -1;
    else
        return minidx+1;
}
int main(){
    int a[] = {1, 5, 3, 4, 3, 5, 6};
    cout<<firstRepeated(a, 7);
}