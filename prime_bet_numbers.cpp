#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a,b;
    cin>>a>>b;
    for(int n=a;n<=b;n++){
        int div;
        for(div=2;div<n;div++){
            if(n%div==0){
                //cout<<"Non Prime"<<endl;
                break;
            }
        }
        if(div==n){
            cout<<n<<endl;
            //cout<<"Prime"<<endl;
        }
        //continue;
    }
    return 0;
}