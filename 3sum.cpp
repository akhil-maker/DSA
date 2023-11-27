#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(int arr[], int n){
    set<vector<int>> s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == 0){
                    vector<int> v{arr[i], arr[j], arr[k]};
                    sort(v.begin(), v.end());
                    s.insert(v);
                }
            }
        }
    }
    vector<vector<int>> ans;
    for(auto it: s)
        ans.push_back(it);
    return ans;
}
vector<vector<int>> threeSumBet(int arr[], int n){
    set<vector<int>> s;
    for(int i=0; i<n; i++){
        set<int> hash;
        for(int j=i+1; j<n; j++){
            int third = -(arr[i]+arr[j]);
            if(hash.find(third)!=hash.end()){
                vector<int> v{arr[i], arr[j], third};
                sort(v.begin(), v.end());
                s.insert(v);
            }
            hash.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}
vector<vector<int>> threeSumOpt(int arr[], int n){
    sort(arr, arr+n);
    set<vector<int>> s;
    for(int i=0; i<n; i++){
        int j = i+1, k = n-1;
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum>0)
                k--;
            else if(sum<0)
                j++;
            else{
                vector<int> v{arr[i], arr[j], arr[k]};
                sort(v.begin(), v.end());
                s.insert(v);
                while(arr[j]==arr[j+1]) j++;
                while(arr[k]==arr[k-1]) k--;
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}
int main(){
    int arr[] = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSumOpt(arr, 6);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}