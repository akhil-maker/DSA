#include<iostream>
#define ll long long
using namespace std;
long long sum(ll a, ll b){
    int M = 1000000007;
    return (a%M + b%M)%M;
}
int main(){
    ll a = 1000000007;
    ll b = 1000000007;
    cout<<sum(a, b);
}