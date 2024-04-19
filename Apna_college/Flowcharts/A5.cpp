#include<iostream>
using namespace std;

int main(){

    int a=10,b=50;
    while(a<=b){
        if(a%3==0)
            cout<<a<<" ";
        a+=1;
    }

    return 0; 
}