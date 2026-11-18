#include<iostream>
using namespace std;
//prime number checker

int main(){
    int num,i,t=0;

    cout<<"Enter a number:";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
    {
        t++;
    }
    }
    if(t==2)
    cout<<"It is a prime number";
    else
    cout<<"It is not a prime number";
    return 0 ;
    
}