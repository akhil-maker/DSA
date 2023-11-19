#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low, j = high;
    while(i<j){
        while(i<=high && arr[i]<=pivot)
            i++;
        while(j>=low && arr[j]>pivot)
            j--;
        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high){
    if(low<high){
        int pt = partition(arr, low, high);
        quickSort(arr, low, pt-1);
        quickSort(arr, pt+1, high);
    }
}
int main(){
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = 8;
    quickSort(arr, 0, 7);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}