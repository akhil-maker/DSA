#include<iostream>
using namespace std;
void leadersArr(int a[], int n){
    int max_from_right = a[n-1];
    cout<<max_from_right<<" ";
    for(int i=n-2; i>=0; i--){
        if(max_from_right<a[i]){
            max_from_right = a[i];
            cout<<max_from_right<<" ";
        }
    }
}
int main(){
    int a[] = {16, 17, 4, 3, 5, 2};
    leadersArr(a, 6);
}