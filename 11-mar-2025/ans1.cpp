/*
Write a method void printArray(int[][]arr)
Prints array elements clockwise and anti-clockwise alternatively.
Input : 
 1 2 3
 4 5 6
 7 8 9
Output :
1 2 3 6 9 8 7 4 5
3 2 1 4 7 8 9 6 5
*/

#include<bits/stdc++.h>
using namespace std;

void printClockWise(vector<vector<int>> &arr){

    int n = arr.size();
    int m = arr[0].size();
    vector<int> mat;
    int startRow = 0, startCol = 0, endRow = n-1, endCol = m-1;
    int count = 0;
    
    while(count < m*n){
        
        //traverse left to right
        for(int i = startCol; i <= endCol && count < m*n; i++){
            mat.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;
    
        //traverse up to down
        for(int i = startRow; i <= endRow && count < m*n; i++){
            mat.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;
    
        //traverse right to left
        for(int i = endCol; i >= startCol && count < m*n; i--){
            mat.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;
    
        //traverse down to up
        for(int i = endRow; i >= startRow && count < m*n; i--){
            mat.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }

    for(int &val: mat) cout<<val<<" ";
    cout<<endl;
}


void printCounterClockWise(vector<vector<int>> &arr){

    int n = arr.size();
    int m = arr[0].size();
    vector<int> mat;
    int startRow = 0, startCol = 0, endRow = n-1, endCol = m-1;
    int count = 0;
    
    while(count < m*n){
        
        //traverse right to left
        for(int i = endCol; i >= startCol && count < m*n; i--){
            mat.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;
    
        //traverse up to down
        for(int i = startRow; i <= endRow && count < m*n; i++){
            mat.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    
        //traverse left to right
        for(int i = startCol; i <= endCol && count < m*n; i++){
            mat.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;
    
        //traverse down to up
        for(int i = endRow; i >= startRow && count < m*n; i--){
            mat.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;
    }

    for(int &val: mat) cout<<val<<" ";
    cout<<endl;
}

int main(){

    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printClockWise(arr);
    printCounterClockWise(arr);

}