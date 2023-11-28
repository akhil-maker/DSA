#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> mergeOInter(vector<vector<int>>& arr, int n){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        int start = arr[i][0], end = arr[i][1];
        if(!ans.empty() && arr[i][1]<=ans.back()[1])
            continue;
        int j = i+1;
        while(j<n && arr[j][0]<end){
            end = max(arr[j][1], arr[i][1]);
            j++;
        }
        ans.push_back({start, end});
    }
    return ans;
}
vector<vector<int>> mergeOInterOpt(vector<vector<int>>& arr, int n){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(ans.empty() || ans.back()[1]<arr[i][0])
            ans.push_back(arr[i]);
        else 
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
    }
    return ans;
}
int main(){
    int n = 8;
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 9}, {9, 11}, {8, 10}, {2, 4}, {15, 18}, {16, 17}};
    vector<vector<int>> ans = mergeOInterOpt(arr, n);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
}