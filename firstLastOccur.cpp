#include<iostream>
#include<vector>
using namespace std;
vector<int> fLOccur(int a[], int n, int x){
    int start = -1, end = -1;
    for(int i=0; i<n; i++){
        if(a[i]==x && start==-1)
            start = i;
        if(a[i]==x){
            end = i;
        }
    }
    vector<int> r;
    r.push_back(start);
    r.push_back(end);
    return r;
}
//O(log n)
int first_occur(int a[], int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x && (mid==0 || a[mid-1]!=x)) return mid;
        if(a[mid]>=x) r = mid-1;
        else l = mid+1;
    }
    return -1;
}
int last_occur(int a[], int n, int x){
    int l=0, r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x && (mid==n-1 || a[mid+1]!=x)) return mid;
        if(a[mid]>x) r = mid-1;
        else l = mid+1;
    }
    return -1;
}
vector<int> fLOccur2(int a[], int n, int x){
    int r1 = first_occur(a, n, x);
    int r2 = last_occur(a, n, x);
    vector<int> r;
    if(r1==r2){
        r.push_back(r1);
        return r;
    }
    if(r1==-1 && r2==-1){
        r.push_back(-1);
        return r;
    }
    r.push_back(r1);
    r.push_back(r2);
    return r;
}
int main(){
    int a[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    vector<int> r = fLOccur(a, 9, 5);
    cout<<r[0]<<" "<<r[1]<<endl;
    vector<int> res = fLOccur2(a, 9, 5);
    cout<<res[0]<<" "<<res[1]<<endl;
}