#include<iostream>
using namespace std;
    

int countDigits(int n){
   
    if(n<10) return 1;
   
    int count = 1+ countDigits(n/10);
    return count ;
}
int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
}