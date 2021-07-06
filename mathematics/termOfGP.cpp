#include<iostream>
#include<math.h>
using namespace std;
double termOfGP(int A,int B,int N){
    //Your code here
    int y = pow(A, N-1), z = pow(B, N-1);
    cout<<y<<" "<<z;
    double x = (A*z)/y;
    return x;
}
int main(){
    cout<<termOfGP(87, 93, 5);
}