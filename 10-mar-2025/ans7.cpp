/*
Write a function that takes in a non-empty array of distinct integers and an integer representing a target sum. The function should find all triplets in the array that sum up to the target sum and return a two-dimensional array of all these triplets. The numbers in each triplet should be ordered in ascending order, and the triplets themselves should be ordered in ascending order with respect to the numbers they hold. If no three numbers sum up to the target sum, the function should return an empty array.
Ex:
target_sum = 6
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
result = [[1, 2, 3]]
*/

#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> findTriplets(vector<int>& arr, int target){

    sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    int n = arr.size();

    for(int i = 0; i < n-2; i++){

        int j = i+1, k = n-1;

        while(j < k){

            if(arr[i] + arr[j] + arr[k] == target){
                res.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if(arr[i] + arr[j] + arr[k] > target){
                k--;
            }
            else j++;
        }
    }
    return res;
}



int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int target = 6;

    vector<vector<int>> res = findTriplets(arr,target);

    for(vector<int> &triplet: res){

        cout<<triplet[0]<<" "<<triplet[1]<<" "<<triplet[2];
        cout<<endl;
    }

}