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