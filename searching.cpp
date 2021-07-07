#include<iostream>
using namespace std;
// linear search O(n)
int search(int a[], int n, int x){
    for(int i=0; i<n; i++)
        if(a[i]==x)
            return i+1;
    return -1;
}
//binary search O(log n)
int search(int a[], int low, int high, int x){
    int mid;
    while(low<high){
        mid = (low+high)/2;
        if(a[mid]==x)
            return mid+1;
        if(a[mid]>x)
            high = mid-1;
        if(a[mid]<x)
            low = mid+1;
    }
    return -1;
}
int main(){
    int a[] = {2, 4, 8, 12, 15, 10, 7};
    cout<<search(a, 7, 15)<<endl;
    int b[] = {2, 5, 6, 10, 15, 20};
    cout<<search(a, 0, 5, 15);
}