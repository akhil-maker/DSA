#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>> fourSum(int arr[], int n){
    set<vector<int>> s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; j<n; j++){
                for(int l=k+1; l<n; l++){
                    int sum = arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==0){
                        vector<int> v{arr[i], arr[j], arr[k], arr[l]};
                        sort(v.begin(), v.end());
                        s.insert(v);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}
vector<vector<int>> fourSumBet(int arr[], int n){
    set<vector<int>> s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            set<int> hash;
            for(int k=j+1; k<n; k++){
                int four = -(arr[i]+arr[j]+arr[k]);
                if(hash.find(four)!=hash.end()){
                    vector<int> v{arr[i], arr[j], arr[k], four};
                    sort(v.begin(), v.end());
                    s.insert(v);
                }
                hash.insert(arr[k]);
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}
vector<vector<int>> fourSumOpt(int arr[], int n){
    sort(arr, arr+n);
    set<vector<int>> s;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int k = j+1, l = n-1;
            while(k<l){
                int sum = arr[i]+arr[j]+arr[k]+arr[l];
                if(sum<0)
                    k++;
                else if(sum>0)
                    l--;
                else{
                    vector<int> v{arr[i], arr[j], arr[k], arr[l]};
                    sort(v.begin(), v.end());
                    s.insert(v);
                    while(arr[k]==arr[k+1]) k++;
                    while(arr[l]==arr[l-1]) l--;
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans;
}
int main(){
    int arr[] = {1, 0, -1, 0, -2, 2};
    vector<vector<int>> ans = fourSumOpt(arr, 6);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}