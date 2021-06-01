#include<iostream>
#include<math.h>
using namespace std;

bool prime(int n){
        bool flag=0;
        for(int i=2; i<sqrt(n); i++){
            if(n%i==0){
                flag=1;
                //cout<<"Not Prime";
                break;
            }
        }
    return flag;
    }

int main(){
    int a=23;
    int b=56;
    
    for (int i=a; i<=b; i++){
        if(prime(i)==0){
            cout<<i<<endl;
        }
    }
    return 0;
}