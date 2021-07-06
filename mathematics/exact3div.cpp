#include<iostream>
#include<math.h>
using namespace std;
int exactly3Divisors(int N){
    //Your code here
    int ans = 0;
    for(int i=4; i<=N; i++){
        int count = 0;
        for(int j=sqrt(i)+1; j<i; j++){
            if(i%j==0)
                count++;
        }
        if(count==1){
            cout<<i<<" ";
            ans++;
        }
    }
    return ans;
}
int main(){
    cout<<exactly3Divisors(10);
}