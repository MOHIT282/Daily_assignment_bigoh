/* Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are surrounded by water.
Input: grid = {
  {'1','1','1','1','0'},
  {'1','1','0','1','0'},
  {'1','1','0','0','0'},
  {'0','0','0','0','0'}
}
Output: 1
Input: grid = {
  {'1','1','0','0','0'},
  {'1','1','0','0','0'},
  {'0','0','1','0','0'},
  {'0','0','0','1','1'}
}
Output: 3
*/

#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &grid, int i, int j){

    int n = grid.size(), m = grid[0].size();

    if(i < 0 || i >= n || j < 0 || j >= m or grid[i][j] == '0') return;

    grid[i][j] = '0';

    int dir[5] = {-1,0,1,0,-1};

    //traverse in all four directions
    for(int k = 0; k < 4; k++){

        dfs(grid,i+dir[k], j+dir[k+1]);
    }

    return;
}

int countIslands(vector<vector<int>> &grid){

    int n = grid.size(), m = grid[0].size();
    int islands = 0;
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            if(grid[i][j] == '1'){
                islands++;
                dfs(grid,i,j);
            }
        }
    }
    return islands;
}

int main(){

    vector<vector<int>> grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','1','0'},
        {'0','0','0','1','1'}
    };

    cout<<"Total Number of island(s) are : "<<countIslands(grid);
}