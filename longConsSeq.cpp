#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int longConsSeq(int arr[], int n){
    sort(arr, arr+n);
    int mx = 1, cnt = 0, lastSmall = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]-1 == lastSmall){
            lastSmall = arr[i];
            cnt++;
        }
        else if(arr[i]!=lastSmall){
            lastSmall = arr[i];
            cnt = 1;
        }
        mx = max(mx, cnt);
    }
    return mx;
}
int longConsOpt(int arr[], int n){
    if(n==0) return 0;
    unordered_set<int> st;
    int mx = 1;
    for(int i=0; i<n; i++)
        st.insert(arr[i]);
    for(auto it: st){
        if(st.find(it-1)==st.end()){
            int cnt = 1, x = it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                cnt++;
            }
            mx = max(mx, cnt);
        }
    }
    return mx;
}
int main(){
    int arr[] = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = 9;
    cout<<longConsSeq(arr, n)<<endl;
    cout<<longConsOpt(arr, n)<<endl;
}