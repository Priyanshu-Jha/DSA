#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod1(int n){
    int decimalNumber = 0;
    int bit = 0,i = 0;
    while(n>0){
        bit = n%2;
        decimalNumber = bit*pow(10,i++) + decimalNumber;
        n = n/2;
    }
    return decimalNumber;
}

int decimalToBinaryMethod2(int n){
    int decimalNumber = 0;
    int i = 0;
    while(n>0){
        int bit = n&1;
        decimalNumber = bit*pow(10,i++) + decimalNumber;
        n = n>>1;
    }
    return decimalNumber;
}

int binaryToDecimal(int n){
    int decimalNumber = 0,i = 0;
    while(n>0){
        int bit = n%10;
        decimalNumber = bit*pow(2,i++) + decimalNumber;
        n = n/10;
    }
    return decimalNumber;
}

int kth_bit(int n, int k){
    int val = 1<<k;
   return n | val; 
    
}

int main(){
    int decimalNumber,k;
    cin>>decimalNumber;//>>k;
    //cout<<kth_bit(decimalNumber,k)<<endl;

    // cout<<decimalToBinaryMethod1(decimalNumber)<<endl;
    // cout<<decimalToBinaryMethod2(decimalNumber);
    cout<<binaryToDecimal(decimalNumber);
}