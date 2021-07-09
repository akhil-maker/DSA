#include<iostream>
using namespace std;
void rearrange(int a[], int n){
    for(int i=0; i<n; i++)
        a[i] += (a[a[i]]%n)*n;
    for(int i=0; i<n; i++)
        a[i] /= n;
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
int main(){
    int a[] = {1, 0};
    rearrange(a, 2);
}