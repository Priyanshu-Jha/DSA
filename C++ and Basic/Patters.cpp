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

//13 Alphabet Palindrome Pyramid
void alpabetPalindromePyramid(int sizePym){
    for(int i = 0;i<sizePym;i++){
        for(int j = 0;j<2*i+1;j++){
            if(j > i)
                cout<<(char)('A'+(2*i -j));
            else
                cout<<(char)('A'+j);
            cout<<" ";
        }
        cout<<endl;
    }
}
//14. Numeric Hollow pyramid
void numericHollowPyraid(int sizePym){
    for(int row = 0;row<sizePym;row++){
        for(int col = 0;col<=row;col++){
            if(row  == sizePym-1)
                cout<<col+1<<" ";
            
            else if(col == 0 or col == row)
                cout<<col+1<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

//15 Inverted Numeric Hollow Pyramid
void invertedNumericHollowPyramid(int sizePym){
    for(int row = sizePym;row>0;row--){
        for(int col = 0;col<row;col++){
            if(row == sizePym)
                cout<<col+1;
            else if(col== 0 )
                cout<<sizePym-row+1;
            else if(col == row-1)
                cout<<sizePym;
            else
                cout<<" ";
            cout<<" ";
        }
        cout<<endl;
    }
}
// 16. NUmeric Palindrome Equilateral Pyramid
void numericPalindromeEquilateralPyramid(int sizePym){
    for(int i = 0;i<sizePym;i++){
        for(int j = i+1;j<sizePym;j++)
            cout<<"  ";
        for(int j = 0;j<=i;j++)
            cout<<j+1<<" ";
        for(int j = i;j>=1;j--)
            cout<<j<<" ";
        cout<<endl;
    }
}
// 17. Fancy Pattern?
void fancyPattern1(int sizePym){
    for(int row = 0;row<sizePym;row++){
        for(int col = 1;col<=(sizePym-1) + (sizePym-1-row);col++)
            cout<<"*";
        for(int col = 0;col<=2*row+1;col++)
        {
            if(col%2 == 0)
                cout<<row+1;
            else    
                cout<<"*";
        }
        for(int col = 1;col<=(sizePym-1) + (sizePym-1-row);col++)
            cout<<"*";
        cout<<endl;
    }

}
// 18. Solid Half Diamond
void solidHalfDiamond(int sizePym){
    for(int row = 0;row<sizePym;row++){
        for(int col = 0;col<=row;col++)
            cout<<"* ";
        cout<<endl; 
    }
    for(int row = sizePym-2;row>=0;row--)
    {
        for(int col = 0;col<=row;col++)
            cout<<"* ";
        cout<<endl;
    }
}

// 19. Fancy Pattern2
void fancyPattern2(int sizePym){
    for(int row = 0;row<sizePym;row++){
        for(int col = 0;col<=row;col++)
            {
                if(col == 0)
                    cout<<"* ";
                else
                    cout<<col<<" ";                
            }
        for(int col = row;col>=2;col--){
            cout<<col-1<<" ";
        }
        if(row!=0)
            cout<<"*";
            cout<<endl;
    }
    for(int row = sizePym-1;row>=0;row--){
        for(int col = 0;col<row;col++){
            if(col == 0)
                cout<<"* ";
            else
                cout<<col<<" ";
        }
        for(int col = row-1;col>=2;col--)
        {
            cout<<col-1<<" ";
        }
        if(row>1)
            cout<<"*";

        cout<<endl;
    }
}
//20. fancy Patter3
void fancyPattern3(int sizePym){
    int count = 1;
    for(int row = 0;row<sizePym;row++){
        for(int col = 0;col<=row;col++)
            {
                cout<<count++;
                if(col!=row)
                    cout<<"*";
            }

        cout<<endl;
    }
    count--;
    for(int row = sizePym;row>0;row--){
        count = count  - row;
        for(int col = 0;col<row;col++)
            {
                cout<<count+col+1;
                if(col!=row-1)
                    cout<<"*";
            }
        cout<<endl;
    }
}
// 21. Floyd Triangle Pattern
void floydTrianglePattern(int sizePym){
    int count  = 1;
    for(int row = 0;row<sizePym;row++){
        for(int col = 0;col<=row;col++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}
//22 Pascal Triangle
void pascalTriangle(int sizePym){
    for(int row = 0;row<sizePym;row++){
        
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
    // SolidDiamond(sizeOfSide);
    //HollowDiamond(sizeOfSide);
    //fiippedSolidDiamond(sizeOfSide);
    // fancyPattern(sizeOfSide);
    //alpabetPalindromePyramid(sizeOfSide);
    numericHollowPyraid(sizeOfSide);
    //invertedNumericHollowPyramid(sizeOfSide);
    //numericPalindromeEquilateralPyramid(sizeOfSide);
    // fancyPattern1(sizeOfSide);
    // solidHalfDiamond(sizeOfSide);
    //fancyPattern2(sizeOfSide);
    // fancyPattern3(sizeOfSide);
    //floydTrianglePattern(sizeOfSide);
}