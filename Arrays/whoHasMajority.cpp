#include<iostream>
using namespace std;
int solve(int a[], int n, int x, int y){
    int cntx=0, cnty=0;
    for(int i=0; i<n; i++){
        if(a[i]==x)
            cntx++;
        if(a[i]==y)
            cnty++;
    }
    if(cntx==cnty)
        return min(x, y);
    return cntx>cnty?x:y;
}
int main(){
    int a[] = {1,1,2,2,3,3,4,4,4,4,5};
    cout<<solve(a, 11, 4, 5);
}