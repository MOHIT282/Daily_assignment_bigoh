#include<bits/stdc++.h>
using namespace std;

// Write a program (without using inbuilt functions and not using Strings or array) to swap first and last digits of any number

long long replaceFirstAndLast(long long number){

    if(number < 10) return number;
    long long temp = number;
    int n = 0;
    int first = number % 10, last = -1;
    long long x = 1;

    while(temp >= 10){
        n += 1;
        temp /= 10;
        x = x * 10;
    }
    last = temp;
    number = number - (last*x) + (first*x); // swap first digit with last digit
    number = number - first + last; // swap last digit with first digit

    return number;
}


int main(){

    long long num = 3989654445265546;
    cout<<"Before swapping : "<<num<<endl;
    cout<<"After swapping :  "<<replaceFirstAndLast(num);
}