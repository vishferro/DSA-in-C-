#include<iostream>
using namespace std;
int productOfDigit(int n){
    if(n<10) return n;
    int prod = (n%10)*productOfDigit(n/10);
    return prod;
}
int main(){
    int n;
    cin>>n;
    
    cout<<productOfDigit(n);
    
}