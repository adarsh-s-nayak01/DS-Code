#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        // int m=matrix.size();
        // int n=matrix[0].size();
        //for square matrices.
        // for(int i=0;i<n;++i){
        //     for(int j=i;j<n;++j){
        //         int temp=matrix[i][j];
        //         matrix[i][j]=matrix[j][i];
        //         matrix[j][i]=temp;
        //     }
        // }
        // return matrix;

        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> res(c,vector<int>(r,0));
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                res[j][i]=matrix[i][j];
            }
        }
        return res;

    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int res=0;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    int ct=0;
                    if(i-1>=0 and grid[i-1][j]==1){ct++;}
                    if(i+1<r and grid[i+1][j]==1){ct++;}
                    if(j-1>=0 and grid[i][j-1]==1){ct++;}
                    if(j+1<c and grid[i][j+1]==1){ct++;}
                    res+= 4-ct;
                }
                
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc,int val, int newColor){
         int r=image.size();
        int c=image[0].size();
        if(sr<0 || sr>=r || sc<0 || sc>=c || image[sr][sc] == newColor || image[sr][sc] != val)
        {
            return;
        }
        image[sr][sc]=newColor;
        dfs(image,sr-1,sc,val,newColor);
        dfs(image,sr+1,sc,val,newColor);
        dfs(image,sr,sc-1,val,newColor);
        dfs(image,sr,sc+1,val,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       
        if(image[sr][sc]==color){return image;}
        int val=image[sr][sc];
        
        dfs(image,sr,sc,val,color);
        return image;
    }
    void rotate(vector<vector<int>>& matrix) {
        //to rotate clockwise. invert matrix vertically and then find transpose.
        reverse(matrix.begin(),matrix.end());
        int n=matrix.size();//square matrix.
        for(int i=0;i<n;++i){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int isUp=1;
        int i=0,j=0;
        for(int k=0;k<r*c;++k){
            if(isUp){
                cout<<mat[i][j]<<" ";
                if(i!=0){
                    i--;
                    j++;
                }
                else{isUp=0;}
            }
            else{
                if(i!=r-1){
                    j--;
                    i++;
                }
            }
        }
        }
    }
};