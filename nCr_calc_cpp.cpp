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
    int n,r;
    n=5;
    r=2;
    cout<<nCr(n,r)<<endl;
    return 0;
}