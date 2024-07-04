#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    cout<<"Enter number: ";
    int x;
    cin>>x;
    int y = x;
    int num;
    int rev=0;
    while(y!=0){
        num = y%10;
        rev = rev*10+num;
        y/=10;
    }
    cout<<rev<<endl;
    if(x == rev){
        cout<<"This number is Palindrome"<<endl;
    }
    else{
        cout<<"This number is not a Palindrome"<<endl;
    }
    return 0;
}
