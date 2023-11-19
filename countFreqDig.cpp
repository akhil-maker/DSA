#include<iostream>
using namespace std;
int first_occur(int a[], int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x && (mid==0 || a[mid-1]!=x)) return mid;
        if(a[mid]>=x) r = mid-1;
        else l = mid+1;
    }
    return -1;
}
int last_occur(int a[], int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x && (mid==n-1 || a[mid+1]!=x)) return mid;
        if(a[mid]>x) r = mid-1;
        else l = mid+1;
    }
    return -1;
}
int main(){
    int a[] = {2, 3, 3, 4, 5, 5, 5, 5, 7, 9}; //sorted array
    cout<<(-first_occur(a, 10, 5)+last_occur(a, 10, 5)+1);
}