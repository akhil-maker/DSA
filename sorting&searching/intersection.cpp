#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(int a1[], int a2[], int n, int m){
    vector<int> r;
    int i=0, j=0;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            i++;
        }
        else if (a2[j]<a1[i]){
            j++;
        }
        else{
            if(r.size()>=1?r[r.size()-1]!=a2[j]:1) r.push_back(a2[j]);
            i++, j++;
        }
    }
    return r;
}
int main(){
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {1, 4, 5};
    vector<int> r = intersection(a1, a2, 5, 3);
    for(int i=0; i<r.size(); i++)
        cout<<r[i]<<" ";
}