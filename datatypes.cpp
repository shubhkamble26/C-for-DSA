#include<iostream>
using namespace std;

int main(){
    int a; //Declaration
    a=12; //initialisation
    cout<<"Size of int is "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of float is "<<sizeof(b)<<endl;

    double c;
    cout<<"Size of double is "<<sizeof(c)<<endl;

    char d;
    cout<<"Size of char is "<<sizeof(d)<<endl;

    bool e;
    cout<<"Size of bool is "<<sizeof(e)<<endl;

    short int si;
    long int li;
    cout<<"Size of shortint is "<<sizeof(si)<<endl;
    cout<<"Size of longint is "<<sizeof(li)<<endl;
    return 0;
}