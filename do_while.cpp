#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    int sum=0;

    do{
        sum=sum+n;
        n=n-1;
    }while(n>0);

    cout<<sum<<endl;
    return 0;
}