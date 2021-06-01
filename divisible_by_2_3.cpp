#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"Divisible by 2 and 3"<<endl;
    }
    else if(n%2==0 || n%3==0){
        if(n%2==0){
            cout<<"Divisible by 2"<<endl;
        }
        else{
            cout<<"Divisible by 3"<<endl;
        }
    }
    else{
        cout<<"Not divisible by 2 or 3"<<endl;
    }

    return 0;
}