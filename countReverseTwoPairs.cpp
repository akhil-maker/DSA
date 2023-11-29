#include<iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high){
    int left = low, right = mid+1, k = 0;
    int temp[high-low+1];
    while(left<=mid && right<=high){
        if(arr[low]<=arr[right]){
            temp[k++] = arr[left];
            left++;
        }
        else{
            temp[k++] = arr[right];
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
}
int cntPair(int arr[], int low, int mid, int high){
    int right = mid+1, cnt = 0;
    for(int i=low; i<=mid; i++){
        while(right<=high && arr[i]>2*arr[right]) right++;
        cnt += (right-(mid+1));
    }
    return cnt;
}
int countRev(int arr[], int low, int high){
    if(low>=high) return 0;
    int mid = (low+high)/2, cnt = 0;
    cnt += countRev(arr, low, mid);
    cnt += countRev(arr, mid+1, high);
    cnt += cntPair(arr, low, mid, high);
    merge(arr, low, mid, high);
    return cnt;
}
int main(){
    int arr[] = {40, 25, 19, 12, 9, 6, 2};
    cout<<countRev(arr, 0, 6);
}