#include<iostream>
using namespace std;
int majorNBy3(int arr[], int n){
    int cnt1 = 0, cnt2 = 0, ele1 = INT_MIN, ele2 = INT_MIN;
    for(int i=0; i<n; i++){
        if(cnt1==0 && arr[i]!=ele2)
            cnt1 = 1, ele1 = arr[i];
        else if(cnt2==0 && arr[i]!=ele1)
            cnt2 = 1, ele2 = arr[i];
        else if(ele1==arr[i])
            cnt1++;
        else if(ele2==arr[i])
            cnt2++;
        else
            cnt1--, cnt2--;
    }
    int x = n/3;
    cnt1 = 0, cnt2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==ele1)
            cnt1++;
        else if(arr[i]==ele2)
            cnt2++;
    }
    if(cnt1>x)
        return ele1;
    else if(cnt2>x)
        return ele2;
    else
        return -1;
}
int main(){
    int arr[] = {2, 1, 1, 3, 1, 4, 5, 6};
    cout<<majorNBy3(arr, 8);
}