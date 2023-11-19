#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int minInd = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[minInd])
                minInd = j;
            swap(arr[i], arr[minInd]);
        }
    }
}
int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    selectionSort(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}