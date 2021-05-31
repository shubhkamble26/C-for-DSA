#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int amount1, amount2;
    cin>>amount1>>amount2;

    //int amount2;
    //cin>>amount2;
    //int sum;

    //cin>>amount1>>amount2;
    //cin>>amount2;

    //int sum=amount1+amount2;
    cout<<amount1+amount2<<endl;
    return 0;
}