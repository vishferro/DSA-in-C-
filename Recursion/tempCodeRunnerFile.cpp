#include<iostream>
using namespace std;
int reverseANumber(int n ,int rev ){
    if(n<10) return n;
    return  rev*10+reverseANumber(n/10,n%10);
;
}
int main(){