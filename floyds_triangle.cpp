#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int count=1;

    for(int i=1;i<=n;i++){
        //count+=1;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count+=1;
        }
        cout<<endl;
    }

    return 0;
}