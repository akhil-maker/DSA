#include<iostream>
using namespace std;
int absolute(int I){
    if(I<0)
        return (-1)*(I);
    return I;
}
int main(){
    cout<<absolute(-23);
}