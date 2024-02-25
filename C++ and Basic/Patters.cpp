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

// 3.  Half Pyramid
void printHalfPyramid(int sizePym){
    for(int i = 0;i<sizePym;i++){
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// 4. Inverted Pyramid
void invertedPyramid(int sizepym){
    for(int i = 0;i<sizepym;i++){
        for(int j = 0;j<sizepym-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// 5.  numeric half pyramid
 void nummericHalfPyramid(int sizepym){
    for(int i = 1;i<=sizepym;i++){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
 }
 
// 6. Inverted number half pyramid
void invertedNumericHalfPyramid(int sizepym){
    for(int i = 1;i<=sizepym;i++){
        for(int j = 1;j<=sizepym-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//7. Full Pyramid
void fullPyramid(int sizepym){
    for(int i = 0;i<sizepym;i++){
        for(int j = i+1;j<sizepym;j++)
            cout<<" ";
        for(int j = 0;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
}

// 8. Inverted Full Pyramid
void InvertedFullyremid(int sizePym){
    for(int i = 0;i<sizePym;i++){
        for(int j = 0;j<i;j++)
            cout<<" ";
        for(int j = 0;j<sizePym-i;j++)
            cout<<"* ";
        
        cout<<endl;
    }
}

// 9. Numeric Full Pyramid
void NumericFullPyramid(int sizePym){

}

int main(){
    int sizeOfSide;
    //int row,column;
    //cin>>row>>column;
    //printHollowRectangle(row,column);
    cin>>sizeOfSide;
    //printSquare(sizeOfSide);
    //printHalfPyramid(sizeOfSide);
    //invertedPyramid(sizeOfSide);
    //nummericHalfPyramid(sizeOfSide);
    //invertedNumericHalfPyramid(sizeOfSide);
    //fullPyramid(sizeOfSide);
    InvertedFullyremid(sizeOfSide);
}