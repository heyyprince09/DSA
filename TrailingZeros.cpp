#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    cout<<"Enter number: ";
    int x;
    cin>>x;
    int factorial=1;
    for(int i=2;i<=x;i++){
        factorial*=i;
    }
    cout<<"Factorial of "<<x<<" is: "<<factorial<<endl;
    int fact = factorial;
    int count=0;
    /*
    for(int i=0;i<fact;i++){
        if(fact%10 == 0){
            count++;
        }
        else{
            break;
        }
        fact/=10;
    }
    */
    while (fact%10 == 0)
    {
        count++;
        fact/=10;
    }
    
    cout<<"Trailing Zeros in Factorial is: "<<count<<endl;
    
    return 0;
}
