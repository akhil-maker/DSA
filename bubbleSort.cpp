#include<iostream>
using namespace std;
void bubbleSort(int a[], int n){
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(a[j]>a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}
int main(){
    int a[] = {13, 46, 24, 52, 20, 9};
    int n = 6;
    bubbleSort(a, n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}