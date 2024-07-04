#include <iostream>
using namespace std;

int main()	{
    int n,m;
    cout<<"Enter First number: ";
    cin>>m;
    cout<<"Enter Second number: ";
    cin>>n;

    int GCD;
    for(int i=1;i<=min(n,m);i++){
        if(n%i==0 && m%i==0){
            GCD = i;
        }
    }

    cout<<"GCD is: "<<GCD<<endl;
    int lcm = (n*m)/GCD;
    cout<<"LCM is: "<<lcm<<endl;

    return 0;
}