#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int t_next;

    for (int i=1;i<=n;i++){
        cout<<t1<<endl;
        t_next=t1+t2;
        t1=t2;
        t2=t_next;
    }
    return;
}

int main(){
    int n=5;
    fib(n);
    return 0;
}