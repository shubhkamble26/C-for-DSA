#include<iostream>
using namespace std;

int summation(int n){
    //int sum=0;
    //for(int i=1;i<=n;i++){
    //    sum+=i;
    //}
    //return sum;
    return n*(n+1)/2;
}

int main(){
    //#ifndef ONLINE JUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    //#endif

    int n;
    cin>>n;

    cout<<summation(n);
    return 0;

}