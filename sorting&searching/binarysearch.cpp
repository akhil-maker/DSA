#include<iostream>
using namespace std;
int search(int a[], int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==x)
            return mid;
        else if(a[mid]<x)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    cout<<search(a, 5, 4);
}