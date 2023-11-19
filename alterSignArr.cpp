#include<iostream>
#include<vector>
using namespace std;
vector<int> alterSignArr(int arr[], int n){
    vector<int> ans(n, 0);
    int pos = 0, neg = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            ans[2*neg+1] = arr[i];
            neg++;
        }
        else{
            ans[2*pos] = arr[i];
            pos++;
        }
    }
    return ans;
}
int  main(){
    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = 6;
    vector<int> ans = alterSignArr(arr, n);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
}