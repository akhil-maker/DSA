//remove duplicate elements from sorted array
#include<iostream>
using namespace std;
//O(n), O(1)
void remoDupli(int a[], int n){
    if(n==0 || n==1)
        return;
    int j=0;
    for(int i=0; i<n-1; i++)
        if(a[i]!=a[i+1])
            a[j++] = a[i];
    a[j++] = a[n-1];
    for(int i=0; i<j; i++)
        cout<<a[i]<<" ";
}
int main(){
    int a[] = {1, 1, 2, 3, 4, 4, 4, 5, 6, 7, 7};
    remoDupli(a, 11);
}