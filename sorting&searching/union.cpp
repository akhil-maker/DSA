#include<iostream>
#include<vector>
using namespace std;
vector<int> unionArr(int a1[], int a2[], int n, int m){
    vector<int> r;
    int i=0, j=0;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            if(r.size()>=1?r[r.size()-1]!=a1[i]:1) r.push_back(a1[i]);
            i++;
        }
        else if (a2[j]<a1[i]){
            if(r.size()>=1?r[r.size()-1]!=a2[j]:1) r.push_back(a2[j]);
            j++;
        }
        else{
            if(r.size()>=1?r[r.size()-1]!=a2[j]:1) r.push_back(a2[j]);
            i++, j++;
        }
    }
    while(i<n){
        if(r.size()>=1?r[r.size()-1]!=a1[i]:1) r.push_back(a1[i]);
        i++;
    }
    while(j<m){
        if(r.size()>=1?r[r.size()-1]!=a2[j]:1) r.push_back(a2[j]);
        j++;
    }
    return r;
}
int main(){
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {1, 2, 3};
    vector<int> r = unionArr(a1, a2, 5, 3);
    for(int i=0; i<r.size(); i++)
        cout<<r[i]<<" ";
}