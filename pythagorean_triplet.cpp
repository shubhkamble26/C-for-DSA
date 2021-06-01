#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
bool check(int x, int y, int z){
    int m=max(x,max(y,z));
    int b,c;
    if(m==x){
        b=y;
        c=z;
    } 
    else if(m==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(pow(m,2)==pow(b,2)+pow(c,2)){
        return true;
    }
    else{
        return false;
    }
}

int32_t main(){
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythagorean Triplet"<<endl;
    }
    else{
        cout<<"Not a Pythagorean Triplet"<<endl;
    }
    return 0;
}