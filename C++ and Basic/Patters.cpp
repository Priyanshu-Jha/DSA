#include<bits/stdc++.h>
using namespace std;

// 1. Square
void printSquare(int sizeOfSide){
    for(int i = 0;i<sizeOfSide;i++){
        for(int j = 0;j<sizeOfSide;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// 2. Hollow Rectangle
void printHollowRectangle(int row,int column){
    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            if(i == 0 or i == row-1){
                cout<<"* ";
            }
            else if(j == 0 or j == column-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

// 3.  

int main(){
    int sizeOfSide;
    int row,column;
    cin>>row>>column;
    printHollowRectangle(row,column);
    //cin>>sizeOfSide;
    //printSquare(sizeOfSide);
}