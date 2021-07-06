#include<iostream>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}
long long findNum(int n){
    ll ans = 1;
    for(ll i=1; i<=n; i++)
        ans = ((ans*i)/(gcd(ans, i)));
    return ans;
}
int main(){
    cout<<findNum(6);
}