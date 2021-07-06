#include<iostream>
#include<math.h>
using namespace std;
// We can use Kamenetsky’s formula to find our answer ! 
int countFac(int n){
    // f(x) = n* log10(( n/ e)) + log10(2*pi*n)/2 
    if(n<0)
        return 0;
    if(n<=1)
        return 1;
    double x = (n*log10(n/M_E)+log10(2*M_PI*n)/2.0);
    return floor(x)+1;
}
int main(){
    cout<<countFac(34434);
}