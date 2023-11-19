#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}
int main(){
    int arr[] = {14, 9, 15, 12, 6, 8, 13};
    int n = 7;
    insertionSort(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}