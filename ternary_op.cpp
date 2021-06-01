#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b=5;
    int c=a>b? a-b:b-a;

    cout<<c<<" "<<&(a);

    return 0;
}