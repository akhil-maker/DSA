#include<iostream>
#include<algorithm>
using namespace std;
void merge2Sort(int arr1[], int arr2[], int m, int n){
    int l = m-1, r = 0;
    while(l>=0 && r<n){
        if(arr1[l]>arr2[r]){
            swap(arr1[l], arr2[r]);
            l--, r++;
        }
        else
            break;
    }
    sort(arr1, arr1+m);
    sort(arr2, arr2+n);
    for(int i=0; i<4; i++)
        cout<<arr1[i]<<" ";
    for(int i=0; i<5; i++)
        cout<<arr2[i]<<" ";
}
void swapGreater(int arr1[], int arr2[], int x, int y){
    if(arr1[x]>arr2[y])
        swap(arr1[x], arr2[y]);
}
void merge2SortOpt(int arr1[], int arr2[], int m, int n){
    int len = m+n;
    int gap = (len/2) + (len%2);
    while(gap>0){
        int l = 0, r = l+gap;
        while(r<len){
            if(l<n && r>=n)
                swapGreater(arr1, arr2, l, r-n);
            else if(l>n)
                swapGreater(arr2, arr2, l-n, r-n);
            else
                swapGreater(arr1, arr1, l, r);
            l++, r++;
        }
        if(gap==1) break;
        gap = (gap/2) + (gap%2);
    }
    for(int i=0; i<4; i++)
        cout<<arr1[i]<<" ";
    for(int i=0; i<5; i++)
        cout<<arr2[i]<<" ";
}
int main(){
    int arr1[] = {1, 3, 5, 7}, arr2[] = {0, 2, 6, 8, 9};
    merge2Sort(arr1, arr2, 4, 5);
}