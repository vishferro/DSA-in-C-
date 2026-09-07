#include<iostream>
using namespace std;
int reverseANumber(int n ,int rev ){
    if(n==0) return rev;
    return  reverseANumber(n/10,rev*10+n%10);

}
int main(){
    int n ;
    cin>>n;
    
    cout<<reverseANumber(n , 0);
    
}