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
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row;
        unordered_set<int> col;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        } 
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                if(row.find(i)!=row.end() || col.find(j)!=col.end()){
                    matrix[i][j]=0;
                }
            }
        }

        //create a dummy array within.
        //like col=0 and row=0 is a dummy array.
        int col0=1 ,rows=matrix.size(), cols=matrix[0].size();
        for(int i=0;i<rows;++i){
            if(matrix[i][0]==0) col0=0;
            for(int j=1;j<cols;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        //traverse form the back.
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
                    
                if(col0==0) {matrix[i][0]=0;}
            }
        }
    }

    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(auto it:nums){
            sum+=it;
            maxi= sum>maxi ? sum : maxi;
            if(sum<0) sum=0;
        }
        return maxi;

    }
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;++i){
            for(int j=i+1;j<nums.size();++j)
                if(nums[i]>nums[j])
                    swap(nums[i],nums[j]);
        }
        //o(n) solution.
        int n=nums.size();
        int j=0;int k=n-1;
        for(int i=0;i<=k;++i){
            if(nums[i]==0)
                swap(nums[i],nums[j++]);//swap and then increment.
            else if(nums[i]==2)
                swap(nums[i--],nums[k--]);//check if the swapped number is also 2
                // so decrement i and then higher bound also decreases 
        }
    }
    bool comparator(pair<int,int> a,pair<int,int> b){
        return a.first>b.first;        

    }
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        map<int,int> odd,even;
        for(int i=0;i<n;++i){
            if(i&1){
                odd[nums[i]]++;
            }
            else{even[nums[i]]++;}
        }
        vector<pair<int,int>> v1,v2;
        for(auto it:odd){
            v1.push_back({it.first,it.second});
        }
        for(auto it:even){
            v2.push_back({it.first,it.second});
        }
        int oddlen=(n+1)/2;
        int evenlen=n/2;
        sort(v1.begin(),v1.end(),[](pair<int,int> a,pair<int,int> b){return a.second>b.second;});
        sort(v2.begin(),v2.end(),[](pair<int,int> a,pair<int,int> b){return a.second>b.second;});

        int of=v1.size()==0? 0 : v1[0].first;
        int ef=v2.size()==0? 0 : v2[0].first;
        int e1=v2.size()==0? 0 : v2[0].second;
        int e2=v2.size()<=1? 0 : v2[1].second;
        int o1=v1.size()==0? 0 : v1[0].second;
        int o2=v1.size()<=1? 0 : v1[1].second;

        if(of==ef){
            return min(oddlen-o1+evenlen-e2,oddlen-o2,+evenlen-e1);
        }
        return oddlen-o1+evenlen-e1;
    }
};