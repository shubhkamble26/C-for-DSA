#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a,b,c;
    cin>>a>>b>>c;

    if (a<b){
        if(b<c){
            cout<<c<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    else{
        if(a<c){
            cout<<c<<endl;
        }else{
            cout<<a<<endl;
        }
    }
    return 0;
}