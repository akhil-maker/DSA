#include<iostream>
using namespace std;
int left_occur(int a[], int n){
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==1 && (mid==0 || a[mid-1]!=1)) return mid;
        if(a[mid]>=1) r = mid-1;
        else l = mid+1;
    }
    return -1;
}
int right_occur(int a[], int n){
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==1 && (mid==n-1 || a[mid+1]!=1)) return mid;
        if(a[mid]>1) r = mid-1;
        else l = mid+1;
    }
    return -1;
}
//O(m*n) - O(m*log n)
int findRowWithMaxOne(int mat[][4], int m, int n){
    int ans = 0;
    int max_count = 0;
    int count = 0;
    for(int i=0; i<m; i++){
        int count_right = right_occur(mat[i], n);
        int count_left = left_occur(mat[i], n);
        if(count_right==-1 || count_left==-1)
            count = 0;
        else
            count = count_right-count_left+1;
        if(count>max_count){
            ans = i;
            max_count = count;
        }
    } 
    cout<<max_count<<" ";
    return ans;
}
int main(){
    int mat[][4] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    cout<<findRowWithMaxOne(mat, 4, 4);
}