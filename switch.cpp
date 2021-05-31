#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char button;
    cout<<"Input a char:"<<endl;
    cin>>button;

    switch(button){
        case 'a':
            cout<<"Hello"<<endl;
            break;
        case 'b':
            cout<<"Namaste"<<endl;
            break;
        case 'c':
            cout<<"Salute"<<endl;
            break;
        case 'd':
            cout<<"Hola"<<endl;
            break;
        case 'e':
            cout<<"Ciao"<<endl;
            break;
        default:
            cout<<"I am learning more!"<<endl;
            break;
    }

    return 0;
}