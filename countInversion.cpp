#include<iostream>
using namespace std;
int merge(int arr[], int low, int mid, int high){
    int left = low, right = mid+1, cnt = 0, k = 0;
    int temp[right-low+1];
    while(left<=mid && right<=high){    
        if(arr[left]<=arr[right]){
            temp[k++] = arr[left];
            left++;
        }
        else{
            temp[k++] = arr[right];
            cnt += (mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        temp[k++] = arr[left];
        left++;
    }
    while(right<=high){
        temp[k++] = arr[right];
        right++;
    }
    for(int i=low; i<=high; i++)
        arr[i] = temp[i-low];
    return cnt;
}
int countInvert(int arr[], int low, int high){
    if(low>=high) return 0;
    int mid = (low+high)/2, cnt = 0;
    cnt += countInvert(arr, low, mid);
    cnt += countInvert(arr, mid+1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}
int main(){
    int arr[] = {5, 3, 2, 4, 1};
    cout<<countInvert(arr, 0, 4);
}