/*
i)Write a program to remove duplicate values from an array and returns an array of unique values. int[] removeDuplicates(int[]values)
Ex: 
values = [2, 4, 6, 2, 8, 10, 4, 12, 14, 6]
result = [2, 4, 6, 8, 10, 12, 14]
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int>& arr){

    unordered_set<int> st;
    vector<int> res;

    for(int &val: arr){

        if(st.find(val) != st.end()) continue;
        else{
            res.push_back(val);
            st.insert(val);
        }
    }
    return res;
}


int main(){

    vector<int> arr = {2, 4, 6, 2, 8, 10, 4, 12, 14, 6};

    vector<int> unique = removeDuplicates(arr);

    for(int val: arr) cout<<val<<" ";
    cout<<endl;
    for(int val: unique) cout<<val<<" ";
}