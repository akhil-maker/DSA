#include<iostream>
using namespace std;
void reverse(int a[], int n){
    int start = 0, end = n-1;
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start = start+1;
        end = end-1;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(a, 6);
}