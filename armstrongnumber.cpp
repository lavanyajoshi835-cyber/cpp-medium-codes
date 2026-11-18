#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num,temp,digit,sum=0,count=0;

    cout<<"Enter a number";
    cin>>num;

    temp=num;

    int n=num;

    while(n>0)
    {
        count++;
        n=n/10;
    }
    while(temp>0)
    {
        digit=temp%10;
        sum=sum+pow(digit,count);
        temp=temp/10;
    }

    if(sum==num)
    cout<<"Armstrong number";
    else
    cout<<"Not an armstrong number";
    return 0;
}