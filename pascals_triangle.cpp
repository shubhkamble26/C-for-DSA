#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for (int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int nCr(int n, int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;

    }
}