#include<iostream>
using namespace std;

int power(int a ,int b){
    if(b==0)
    return 1;

    int powr =a*power(a,b-1);
    return powr;
    
}
int valid(int a ,int b){
    if(a==0 && b==0){
    cout<<"not defined"<<" ";
    return 0;
    }

    else
    return power(a , b);
}
int main(){
    int a,b ;
    cout<<"enter a number";
    cin>>a;
      cout<<"enter a number";
    cin>>b;
    cout<<valid(a,b);

}