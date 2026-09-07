#include<iostream>
using namespace std;
int sumOfDigit(int n){
    if(n==0) return 0;
    int sum = (n%10)+sumOfDigit(n/10);
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfDigit(n);
}