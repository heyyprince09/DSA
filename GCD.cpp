#include <iostream>
using namespace std;

int main()	{
    int n,m;
    cout<<"Enter First number: ";
    cin>>m;
    cout<<"Enter Second number: ";
    cin>>n;
    // int Smaller;
    // if(n>m){
    //     Smaller = m;
    // }
    // if(n<m){
    //     Smaller = n;
    // }

    // cout<<min(n,m)<<endl;
    // cout<<max(n,m)<<endl;

    int Smaller = min(n,m);
    int GCD;
    for(int i=1;i<=Smaller;i++){
        if(n%i==0 && m%i==0){
            GCD = i;
        }
    }

    cout<<"GCD is: "<<GCD<<endl;
    return 0;
}