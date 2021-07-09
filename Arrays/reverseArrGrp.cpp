#include<iostream>
using namespace std;
void revArrGrp(int a[], int n, int k){
    int i=0, start, end;
    if(k>=n)
        k = n;
    while(i<n){
        int start = i, end = i+k-1;
        if(end>=n)
            end = n-1;
        while(start<end){
            swap(a[start], a[end]);
            start = start+1;
            end = end-1;
        }
        i += k;
    }
}
int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    revArrGrp(a, 9, 3);
    for(int i=0; i<9; i++)
        cout<<a[i]<<" ";
}