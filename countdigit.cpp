#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    cout<<"Enter number: ";

    int x;
    cin>>x;
    int count=0;

    while(x!=0){
        x/=10;
        count++;
    }     
    cout<<count<<endl;
    return 0;
}
