#include<iostream>
using namespace std;
void number(int n){
    if(n==0)
    return;
        cout<<n <<" ";

   return  number(n-1);
    
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    number(n);
}