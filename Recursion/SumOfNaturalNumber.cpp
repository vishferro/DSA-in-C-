#include<iostream>
using namespace std;
int add(int n ){
    

    if(n>n+1)
    return 0;

     
    return n+add( n-1);

    
}
int main(){
    int n ;
    cout<<"enter a number";
    cin>>n;
    cout<<add(n);
}