#include<iostream>
using namespace std;

int main(){
    int n=3456;
    int reverse=0;

    while(n>0){
        int last_dgt=n%10;;
        reverse = reverse*10 + last_dgt;
        n=n/10;
    }
    cout<<reverse<<endl;
}