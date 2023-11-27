#include<iostream>
#include<vector>
using namespace std;
void spiralMat(vector<vector<int>>& mat){
    int m = mat.size(), n = mat[0].size();
    int top = 0, left = 0, bottom = m-1, right = n-1;
    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++)
            cout<<mat[top][i]<<" ";
        top++;
        for(int i=top; i<=bottom; i++)
            cout<<mat[i][right]<<" ";
        right--;
        if(top<=bottom){
            for(int i=right; i>=left; i--)
                cout<<mat[bottom][i]<<" ";
            bottom--;
        }
        if(left<=right){
            for(int i=bottom; i>=top; i--)
                cout<<mat[i][left]<<" ";
            left++;
        }
    }
}
int main(){
    vector<vector<int>> mat = {
                                {1, 2, 3, 4, 5, 6},
                                {20, 21, 22, 23, 24, 7},
                                {19, 32, 33, 34, 25, 8},
                                {18, 31, 36, 35, 26, 9},
                                {17, 30, 29, 28, 27, 10},
                                {16, 15, 14, 13, 12, 11}
                            };
    spiralMat(mat);
}