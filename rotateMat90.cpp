#include<iostream>
#include<vector>
using namespace std;
void rotateMat(vector<vector<int>>& mat){
    int m = mat.size(), n = mat[0].size();
    vector<vector<int>> v(m, vector<int>(n, 0));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            v[j][n-i-1] = mat[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void rev(vector<int>& a){
    for(int i=0; i<a.size()/2; i++)
        swap(a[i], a[a.size()-i-1]);
}
void rotateMatOpt(vector<vector<int>>& mat){
    int m = mat.size(), n = mat[0].size();
    for(int i=0; i<m-1; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i=0; i<m; i++)
        rev(mat[i]);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> mat = {
                                {1, 2, 3, 4},
                                {5, 6, 7, 8},
                                {9, 10, 11, 12},
                                {13, 14, 15, 16}
                            };
    vector<vector<int>> r = mat;
    rotateMat(mat);
    cout<<endl;
    rotateMatOpt(r);
}