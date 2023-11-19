#include<iostream>
using namespace std;
void zerosFront(int arr[], int n){
    int j = -1;
    for(int i=n-1; i>=0; i--){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    int i = j-1;
    while(i>=0){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j--;
        }
        i--;
    }
}
int main(){
    int arr[] = {1, 0, 2, 3, 0, 0, 4, 0};
    int n = 8;
    zerosFront(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}