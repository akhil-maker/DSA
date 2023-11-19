#include<iostream>
using namespace std;
void rotateArr(int arr[], int k, int n){
    for(int i=0; i<k/2; i++)
        swap(arr[i], arr[k-i-1]);

    for(int i=k; i<(k+n)/2; i++)
        swap(arr[i], arr[n-i+k-1]);

    for(int i=0; i<n/2; i++)
        swap(arr[i], arr[n-i-1]);

}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3, n = 7;
    rotateArr(arr, k, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}