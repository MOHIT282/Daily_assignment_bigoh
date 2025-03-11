/*
Write an efficient algorithm that searches for a value in a m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
Input: matrix = [[1,3,5,7],
                [10,11,16,20],
                [23,30,34,60]], target = 3
Output: true
m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
*/

#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> &arr, int target){

    int m = arr.size(), n = arr[0].size();
    int i = 0, j = n-1;

    while(i < m and j >= 0){

        if(arr[i][j] == target) return true;

        else if(arr[i][j] > target) j--;

        else i++;
    }

    return false;
}

int main(){

    vector<vector<int>> arr = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    cout<<search(arr, 32);
}