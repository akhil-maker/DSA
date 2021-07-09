#include<iostream>
using namespace std;
int eqlib(int a[], int n){
    int leftSum, rightSum;
    for(int i=0; i<=n-1; i++){
        leftSum = 0;
        for(int j=0; j<=i-1; j++)
            leftSum += a[j];
        rightSum = 0;
        for(int j=i+1; j<=n-1; j++)
            rightSum += a[j];
        if(leftSum==rightSum)
            return i;
    }
    return -1;
}
int eqIndex(int a[], int n){
    int leftSum = 0, sum = 0;
    for(int i=0; i<n; i++)
        sum += a[i];
    for(int i=0; i<n; i++){
        sum -= a[i];
        if(leftSum==sum)
            return i;
        leftSum += a[i];
    }
    return -1;
}
int main(){
    int a[] = {-7, 1, 5, 2, -4, 3, 0};
    cout<<eqlib(a, 7)<<endl;
    cout<<eqIndex(a, 7);
}