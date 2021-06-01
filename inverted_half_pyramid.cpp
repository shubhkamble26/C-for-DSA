#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    for(int i=n;i>=1;i--){
        for (int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}