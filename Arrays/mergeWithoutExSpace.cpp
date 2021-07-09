#include<iostream>
using namespace std;
void merge(int a[], int b[], int m, int n){
    //Iterate through all elements of ar2 from last
    for(int i=n-1; i>=0; i--){
        int j, last = a[m-1];
        //find smallest ele > ar2[i]. Move all ahead 1 pos till get it
        for(j=m-2; j>=0 && a[j]>b[i]; j--)
            a[j+1] = a[j];
        //if there was a greater ele
        if(j!=m-2 || last>b[i]){
            a[j+1] = b[i];
            b[i] = last;
        }
    }
}
int main(){
    int a[] = {1, 5, 9, 10, 15, 20};
    int b[] = {2, 3, 8, 10};
    merge(a, b, 6, 4);
    for(int i=0; i<6; i++)
        cout<<a[i]<<" ";
    for(int i=0; i<4; i++)
        cout<<b[i]<<" ";
}