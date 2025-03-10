// Write a program to print the below pattern:
// \*****/         
// *\***/*         
// **\*/**         
// ***/***         
// **/*\**        
// */***\*         
// /*****\

#include<bits/stdc++.h>
using namespace std;


void drawPattern(int n){

    if(n < 1) cout<<" mininum value is 1"<<endl;
    else if(n % 2 == 0) cout<<"n should be an odd number !!"<<endl;

    else{
        // upper part 
        for(int i = 0; i < n/2; i++){

            for(int j = 0; j < i; j++){
                cout<<'*';
            }
            cout<<"\\";
            for(int k = n- (i+1)*2; k > 0; k--){
                cout<<'*';
            }
            cout<<"/";
            for(int j = 0; j < i; j++){
                cout<<'*';
            }
            cout<<endl;
        }

        // center row
        for(int i = 0; i <n/2; i++) cout<<'*';
        cout<<'/';
        for(int i = 0; i <n/2; i++) cout<<'*';
        cout<<endl;

        // lower part
        for(int i = 0; i < n/2; i++){

            for(int j = n/2-1; j > i; j--){
                cout<<'*';
            }
            cout<<"/";
            for(int k = 0; k < (2*i)+1; k++){
                cout<<'*';
            }
            cout<<"\\";
            for(int j =n/2-1; j > i; j--){
                cout<<'*';
            }
            cout<<endl;
        }
    }

}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    drawPattern(n);
    
}