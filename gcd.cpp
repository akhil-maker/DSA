#include<iostream>
using namespace std;
//O(log(min(a, b)))
int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}
int main(){
    cout<<gcd(30, 42);
}