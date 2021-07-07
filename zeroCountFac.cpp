#include<iostream>
#include<math.h>
using namespace std;
int countTrailZeros(int n, int k){
    if(n/k==0)
        return 0;
    return countTrailZeros(n, 5*k)+floor(n/5);
}
int main(){
    cout<<countTrailZeros(20, 5);
}