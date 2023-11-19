#include<iostream>
using namespace std;
void zerosEnd(int arr[], int n){
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    int i = j+1;
    while(i<n){
        if(arr[i]!=0){
            swap(arr[j], arr[i]);
            j++;
        }
        i++;
    }
}
int main(){
    int arr[] = {1, 0, 2, 3, 0, 0, 4, 0};
    int n = 8;
    zerosEnd(arr, n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}   