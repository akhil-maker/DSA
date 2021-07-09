#include<iostream>
using namespace std;
void merge(int a[], int b[], int m, int n){
    int c[m+n];
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(a[i]<b[j])
            c[k++] = a[i], i++;
        else if(b[j]<a[i])
            c[k++] = b[j], j++;
        else{
            c[k++] = a[i], i++;
            c[k++] = b[j], j++;
        }
    }
    while(i<m)
        c[k++] = a[i++];
    while(j<n)
        c[k++] = b[j++];
    for(int i=0; i<m+n; i++)
        cout<<c[i]<<" ";
}
int main(){
    int a[] = {1, 3, 6, 8, 9};
    int b[] = {2, 4, 6, 7, 8};
    merge(a, b, 5, 5);
}