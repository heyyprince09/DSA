#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    cout<<"Enter number: ";
    int x;
    cin>>x;
    int factorial=1;
    for(int i=1;i<=x;i++){
        factorial*=i;
    }
    cout<<"Factorial of "<<x<<" is: "<<factorial<<endl;
    return 0;
}
