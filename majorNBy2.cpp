#include<iostream>
using namespace std;
int majorNBy2(int arr[], int n){
    int cnt = 0, ele;
    for(int i=0; i<n; i++){
        if(cnt==0){
            cnt = 1;
            ele = arr[i];
        }
        else if(arr[i]==ele)
            cnt++;
        else
            cnt--;
    }
    cnt = 0;
    for(int i=0; i<n; i++)
        if(arr[i]==ele) cnt++;
    if(cnt > n/2) return ele;
    return -1;
}
int main(){
    int arr[] = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    cout<<majorNBy2(arr, 16);
}