#include<iostream>
using namespace std;
int main(){
    int n , arr[] = { 10,20,30,40,50,60,70,80,90,100};
    n = sizeof(arr)/sizeof(int);
    cout<<sizeof(arr)/sizeof(int)<<endl;
    //cout<<size(arr)<<endl; //giving error
    cout<<arr[2]<<endl;
    arr[2] = 35;
       cout<<arr[2]<<endl;
     //  cin>>arr[2];
          //cout<<arr[2]<<endl;
          for(int i=0;i<=n-1;i++){
            cout<<arr[i]<<endl;

          }

}