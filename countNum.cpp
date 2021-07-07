#include<iostream>
#include<math.h>
using namespace std;
//O(n)
int count(int n){
    int count = 0;
    while(n!=0){
        count++;
        n /= 10;
    }
    return count;
}
//O(1)
int count2(int n){
    return floor(log10(n)+1);
}
int main(){
    cout<<count2(3450)<<" "<<count2(1000098)<<" "<<count2(67000)<<endl;
}