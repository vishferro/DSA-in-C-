#include<iostream>
using namespace std;
int main(){
    int n ,sum = 0, arr[] = { 10,20,30,40,50,60,70,80,90,100};
    n = sizeof(arr)/sizeof(int);
    cout<<sizeof(arr)/sizeof(int)<<endl;
          for(int i=0;i<=n-1;i++){
            sum+= arr[i];
            //cout<<arr[i]<<endl;
                  //cout<<sum<<endl;

          }
          cout<<sum<<endl;


}