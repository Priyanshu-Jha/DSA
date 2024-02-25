#include<bits/stdc++.h>
using namespace std;

void CheckValidTriangle(int a,int b,int c){
    int sum = a+b+c;
    if(sum-a<=a or sum-b<=b or sum-c<=c)
        cout<<"Invalid Triangle";
    else
        cout<<"Valid Triangle";
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    CheckValidTriangle(a,b,c);
}