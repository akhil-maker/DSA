#include<iostream>
#include<vector>
using namespace std;
void setMatZero(vector<vector<int>>& mat){
    int m = mat.size(), n = mat[0].size();
    int row[m], col[n];
    for(int i=0; i<m; i++)
        row[i] = 0;
    for(int j=0; j<n; j++)
        col[j] = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(row[i]==1 || col[j]==1)
                mat[i][j] = 0;
        }
    }
}
void setMatZeroOpt(vector<vector<int>>& mat){
    int m = mat.size(), n = mat[0].size(), col0 = 1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]==0){
                mat[i][0] = 0;
                if(j!=0)
                    mat[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(mat[i][j]!=0){
                if(mat[i][0]==0 || mat[0][j]==0)
                    mat[i][j] = 0;
            }
        }
    }
    if(mat[0][0]==0){
        for(int j=0; j<n; j++)
            mat[0][j] = 0;
    }
    if(col0==0){
        for(int i=0; i<m; i++)
            mat[i][0] = 0;
    }
}
int main(){
    vector<vector<int>> mat = {
                                {1, 1, 1, 1},
                                {1, 0, 1, 1},
                                {1, 1, 0, 1},
                                {1, 0, 0, 1}
                            };
    vector<vector<int>> r = mat;
    setMatZero(mat);
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[0].size(); j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    setMatZeroOpt(r);
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[0].size(); j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}