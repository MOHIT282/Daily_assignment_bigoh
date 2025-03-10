// iii) Find the largest number less than N whose each digit is prime number
#include<bits/stdc++.h>
using namespace std;

bool isEachDigitPrime(int number){

    unordered_set<int> primes({2,3,5,7});

    while(number > 0){ // run loop while number is greater than 0
        int digit = number % 10;
        if(primes.find(digit) == primes.end()) return false;
        number = number / 10;
    }

    return true;
}

int findLargestPrime(int number){

    if(number < 2) return -1;
    number--; // required ans should be lesser
    while(number > 0){

        if(isEachDigitPrime(number)) return number;
        number -= 1;
    }
    return -1;
}

int main(){

    int number = 102;

    int ans = findLargestPrime(number);

    if(ans == -1) cout<<"largest number less than"<<number<<" whose each digit is prime number ";

    else cout<<"largest number less than"<<number<<" whose each digit is prime number is : "<<ans;

}