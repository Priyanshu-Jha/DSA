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

// 9. Solid Diramond
void SolidDiamond(int sizePym){
    //upper triangle
    for(int i = 0;i<sizePym;i++){
        for(int j = i;j<sizePym-1;j++){
            cout<<" ";
        }
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    //lower triangle
    for(int i = 0;i<sizePym;i++){
        for(int j = 0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j = 0;j<sizePym-i;j++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
}
//10 Hollow Diamond
void HollowDiamond(int sizePym){
    for(int i = 0;i<sizePym;i++){
        for(int j = 0;j<sizePym-i-1;j++)
            cout<<" ";
        for(int j = 0;j<=i;j++)
            if(j == 0 or j == i)
                cout<<"* ";
            else
                cout<<"  ";
        cout<<endl;
    }
    for(int i = 0;i<sizePym;i++){
        for(int j = 0;j<i;j++)
            cout<<" ";
        for(int j = 0;j<sizePym;j++)
            {
                if(j == 0 or j == sizePym-i-1)
                    cout<<"* ";
                else    
                    cout<<"  ";
            }
            cout<<endl;
    }
}
//11 Flipped Solid Diamond
void fiippedSolidDiamond(int sizePym){
    // Upper diamond
    for(int i = 0;i<sizePym;i++){
        for(int j = 0;j<2*sizePym;j++){
            if(j<=sizePym-1-i or j>=sizePym+i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    //Lower diamond
    for(int i = 0;i<sizePym;i++){
        for(int j = 0;j<2*sizePym;j++){
            if(j<=i or j>=2*sizePym-i-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
//12 Fancy Patter
void fancyPattern(int sizePym){
    for(int row = 0;row<sizePym;row++){
        for(int col = 0;col<2*row+1;col++){
            if(col%2 == 0)
                cout<<row+1;
            else
                cout<<"*";
        }
        cout<<endl;
    }
    for(int row = sizePym-1;row>-1;row--){
        for(int col = 0;col<2*row+1;col++){
            if(col%2 == 0)
                cout<<row+1;
            else
                cout<<"*";
        }
        cout<<endl;
    }
}
// 10. Numeric Full Pyramid
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
    //InvertedFullyremid(sizeOfSide);
    //SolidDiamond(sizeOfSide);
    //HollowDiamond(sizeOfSide);
    //fiippedSolidDiamond(sizeOfSide);
    fancyPattern(sizeOfSide);
}