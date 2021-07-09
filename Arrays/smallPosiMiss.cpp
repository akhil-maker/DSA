#include<iostream>
using namespace std;
int segregate(int a[], int n){
    int j=0, i;
    for(i=0; i<n; i++){
        if(a[i]<=0){
            swap(a[i], a[j]);
            j++;
        }
    }
    return j;
}
int positiveMissArr(int a[], int n){
    int i=0;
    for(int i=0; i<n; i++){
        if(abs(a[i])-1 < n && a[abs(a[i])-1] > 0)
            a[abs(a[i])-1] = -a[abs(a[i])-1];
    }
    for(int i=0; i<n; i++)
        if(a[i]>0)
            return i+1;
    return n+1;
}
int findSmallele(int a[], int n){
    int shift = segregate(a, n);
    return positiveMissArr(a+shift, n-shift);
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout<<findSmallele(a, 5);
}