// Write a program to find the smallest number divisible by all the numbers between 1 to n.
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

    if(a == b) return a;

    if(a > b) return gcd(a-b, b);
    else return gcd(a, b-a);
}

int lcm(int a, int b) { return (a*b)/gcd(a,b); }


// int divisibleByAll(int n){

//     int number = n;
//     while(true){

//         bool found = true;

//         for(int i = 2; i <= n; i++){
//             if(number % i != 0){
//                 found = false;
//                 break;
//             }
//         }
//         if(found) return number;
//         number += 1;
//     }
//     return -1;
// }


long long divisibleByAll(int n){

    long long resultant = 1;
    for(int i = 2; i <= n; i++){

        resultant = lcm(resultant, i);
    }
    return resultant;
}

int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<divisibleByAll(n);
}