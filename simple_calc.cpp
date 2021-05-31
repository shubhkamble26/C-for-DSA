#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char sign;
    cin>>sign;
    int a=5;
    int b=3;

    switch(sign){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<float(a)/b<<endl;
            break;
        default:
            cout<<"No Such Sign"<<endl;
            break;
    }

    return 0;
}
