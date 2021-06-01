#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=2*n;j++){
            if(j<=i || j>=2*n-i+1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for (int i=n+1;i<=2*n;i++){
        for (int j=1;j<=2*n;j++){
            if(j<=2*n-i+1 || j>=i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}