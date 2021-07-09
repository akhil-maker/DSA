#include<iostream>
using namespace std;
void sortInWave(int a[], int n){
    for(int i=0; i<n; i+=2){
        if(i>0 && a[i]<a[i-1])
            swap(a[i], a[i-1]);
        if(i<n-1 && a[i]<a[i+1])
            swap(a[i], a[i+1]);
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
int main(){
    int a[] = {10, 90, 49, 2, 1, 5, 23};
    sortInWave(a, 7);
}