#include<iostream>
using namespace std;
void checkPrimeNumber(int n){
    for(int i = 2;i*i<=n;i++){
        if(n%i == 0)
            return;
    }
    cout<<n<<endl;
}
int main(){
    int n,sum = 0;
    cin>>n;
    for(int i = 2;i<n+1;i++)
        checkPrimeNumber(i);
    return  0;
}
