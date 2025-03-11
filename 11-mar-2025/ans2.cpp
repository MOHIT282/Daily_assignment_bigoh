/*
2. Write a program to print all the possible combinations according to the input values.
Example :
Given Values
'1' : ['Z', 'Y', 'A'],
'2' : ['B', 'O'],
'12' : ['L']
'3' : ['U', 'P']
Input: 123
Output : [ZBU, ZBP, ZOU, ZOP, YBU, YBP, YOU, YOP, ABU, ABP, AOU, AOP, LU, LP]
*/

#include<bits/stdc++.h>
using namespace std;

unordered_map<string, vector<char>> mappings = {
    {"1", {'Z', 'Y', 'A'}},
    {"2", {'B', 'O'}},
    {"12", {'L'}},
    {"3", {'U', 'P'}}
};

void generateSplits(string &input, int pos, vector<vector<string>> &allSplits, vector<string> currentSplit) {

    if (pos >= input.size()) {
        allSplits.push_back(currentSplit);
        return;
    }

    for(int j = 0; j < input.size(); j++){

        if(pos + j < input.size()){
            string key1 = input.substr(pos, j+1);
            if (mappings.find(key1) != mappings.end()) {
                currentSplit.push_back(key1);
                generateSplits(input, pos + j+1, allSplits, currentSplit);
                currentSplit.pop_back();
            }
        }
    }
}

vector<string> Cartesianproduct(vector<vector<char>> &lists) {

    vector<string> result;
    result.push_back("");
    
    for (vector<char> &list : lists) {
        
        vector<string> temp;

        for (string &s : result) {

            for (char c : list) {

                temp.push_back(s + c);
            }
        }
        result = temp;
    }
    return result;
}

int main() {

    string input = "123";
    vector<vector<string>> allSplits;
    vector<string> currentSplit;
    generateSplits(input, 0, allSplits, currentSplit);

    if(allSplits.empty()){
        cout<<"No combinations"<<endl;
    }
    
    else{    
        
        for (vector<string> &split : allSplits) {

            vector<vector<char>> charLists;

            for (string &key : split) {

                charLists.push_back(mappings[key]);
            }

            vector<string> combinations = Cartesianproduct(charLists);

            for(string &comb: combinations) cout<<comb<<" ";
        }
    
        
    }
    return 0;
}


    
