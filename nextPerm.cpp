#include<iostream>
#include<algorithm>
using namespace std;
void nextPerm(int arr[], int n){
    int ind = -1;
    for(int i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            ind = i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr, arr+n);
        return;
    }
    for(int i=n-1; i>ind; i--){
        if(arr[i]>arr[ind]){
            swap(arr[i], arr[ind]);
            break;
        }
    }
    reverse(arr+ind+1, arr+n);
}
int main(){
    int arr[] = {2, 1, 5, 4, 3, 0, 0};
    nextPerm(arr, 7);
    for(int i=0; i<7; i++)
        cout<<arr[i]<<" ";
}