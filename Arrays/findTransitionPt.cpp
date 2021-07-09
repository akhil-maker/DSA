#include<iostream>
using namespace std;
int tranPt(int a[], int n){
    int indPt = -1;
    for(int i=0; i<n; i++){
        if(a[i]==1){
            indPt = i;
            break;
        }
    }
    return indPt;
}
int main(){
    int a[] = {0, 0, 0, 1, 1};
    cout<<tranPt(a, 5);
}