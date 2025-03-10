#include<bits/stdc++.h>
using namespace std;

/*
i) Write down a method boolean isNameValid(String  name).
A name is valid if following conditions are satisfied:
• It does not contain any vowel more than once.
• If the name contains two ‘S’, then there is not any ‘T’ in between them (both in capital cases).
*/

bool isNameValid(string name){

    unordered_set<char> st;
    int len = name.size();
    string vowels = "aeiouAEIOU"; // vowel string as upper case and lower case vowels are treated differently

    for(int i = 0; i < len; i++){

        if(vowels.find(name[i]) != string::npos){ // check if char is vowel or not

            if(st.find(name[i]) != st.end()){ // check if this vowel is already present or not
                return false;
            }
            st.insert(name[i]);
        }

        if(name[i] == 'S' && i < len-2 && name[i+1] == 'T' and name[i+2] == 'S') return false; // check for 2nd condition
    }

    return true;
}

int main(){

    string name = "MStSohitKumarST";
    bool valid = isNameValid(name);

    if(valid) cout<<"Name is valid";
    else cout<<"Name is not valid";
}