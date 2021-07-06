#include<iostream>
#include<algorithm>
using namespace std;
// method 1 O(n), O(k)
void rotateArr(int a[], int n, int k){
    if(k>=n)
        return;
    int temp[k];
    for(int i=0; i<k; i++)
        temp[i] = a[i];
    for(int i=k; i<n; i++)
        a[i-k] = a[i];
    for(int i=n-k, d=0; i<n; i++)
        a[i] = temp[d++];
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
// method 2, O(k^n), O(1)
void rotateArr2(int a[], int n, int k){
    for(int i=0; i<k; i++){
        int temp = a[0];
        for(int j=0; j<n-1; j++)
            a[j] = a[j+1];
        a[n-1] = temp;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
//method 3, O(n)
void reverse(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++, end--;
    }
}
void rotateArr3(int a[], int n, int k){
    reverse(a, a+k);
    reverse(a+k, a+n);
    reverse(a, a+n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n=7, k=1;
    rotateArr(a, n, k);
    int b[] = {1, 2, 3, 4, 5, 6, 7};
    n = 7, k = 2;
    rotateArr2(b, n, k);
    int c[] = {1, 2, 3, 4, 5, 6, 7};
    n = 7, k = 3;
    rotateArr3(c, n, k);
}