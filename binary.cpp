#include<iostream>
using namespace std;

int main(){
    int num,rem,binary=0,place=1;

    cout<<"Enter a decimal number";
    cin>>num;

    while(num>0){
        rem=num%2;
        binary=binary+rem*place;
        num=num/2;
        place=place*10;
    }
    cout<<"Binary number:"<<binary;
    return 0;
}