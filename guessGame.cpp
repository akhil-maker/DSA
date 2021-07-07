#include<iostream>
#include<math.h>
using namespace std;
int ans(int inp, int x){
    if(inp==x){
        cout<<"Congrats"<<endl;
        return 1;
    }
    else if(inp<x){
        cout<<"Your input is smaller"<<endl;
        return 0;
    }
    else{
        cout<<"Your input is greater"<<endl;
        return 0;
    }
}
int main(){
    int inp, x = 15;
    cout<<"Choose a number between 1 and 20"<<endl;
    cout<<"input a number = ";
    cin>>inp;
    int n = 20, count = 1;
    while(ans(inp, x)!=1 && count<=log(n)){
        cout<<"input a number = ";
        cin>>inp;
        count++;
    }
}