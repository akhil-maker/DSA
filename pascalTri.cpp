#include<iostream>
#include<vector>
using namespace std;
int f(int n, int r){
    int ans = 1;
    for(int i=0; i<=r; i++){
        ans = ans*(n-i);
        ans = ans/(i+1);
    }
    return ans;
}
int pascalEle(int r, int c){
    return f(r-1, c-1);
}
vector<int> pascalRow(int row){
    vector<int> p;
    p.push_back(1);
    for(int i=1; i<row; i++){
        int ele = f(row-1, i-1);
        p.push_back(ele);
    }
    return p;
}
vector<vector<int>> pascalTri(int n){
    vector<vector<int>> ptri;
    for(int i=1; i<=n; i++){
        vector<int> prow;
        prow.push_back(1);
        for(int j=0; j<=i; j++){
            int ele = f(i-1, j);
            prow.push_back(ele);
        }
        ptri.push_back(prow);
    }
    return ptri;
}
int main(){
    cout<<pascalEle(5, 3)<<endl;
    vector<int> prow = pascalRow(5);
    for(int i=0; i<prow.size(); i++)
        cout<<prow[i]<<" ";
    cout<<endl;
    vector<vector<int>> ptri = pascalTri(5);
    for(int i=0; i<=ptri.size(); i++){
        for(int j=0; j<=i; j++)
            cout<<ptri[i][j]<<" ";
        cout<<endl;
    }
}