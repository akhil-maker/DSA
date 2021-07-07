#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2; i<=n-1; i++)
        if(n%i==0)
            return true;
    return false;
}
bool isPrime2(int n){
    bool prime[n+1];
    for(int i=0; i<=n; i++)
        prime[i] = true;
    for(int p=2; p*p<=n; p++){
        if(prime[p]==true){
            for(int i=p*p; i<=n; i+=p)
                prime[i] = false;
        }
    }
    if(prime[n]==true)
        return true;
    return false;
}
int main(){
    cout<<isPrime2(23);
}