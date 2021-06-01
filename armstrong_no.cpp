#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=153;
    int original_n=n;
    int sum_cube=0;

    while(n>0){
        int last_dgt=n%10;
        sum_cube=sum_cube + pow(last_dgt,3);
        n=n/10;
    }

    if(sum_cube==original_n){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong number"<<endl;
    }
    return 0;
}