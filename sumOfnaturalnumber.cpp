#include <iostream>
#include <stdio.h>

using namespace std;
void pattern(int n){
    for(int i= 0;i<n;i++ ){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    
    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void InvertedPyramid(int n){
    for(int i= 0;i<n;i++ ){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
void StarPyramid(int n){
    for(int i=0;i<n;i++){
        
    }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    //pattern(n);
    //pattern2(n);
    InvertedPyramid(n);
    return 0;
}
