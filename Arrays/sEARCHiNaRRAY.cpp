#include<iostream>
using namespace std;
int main(){
    int n , arr[] = { 10,20,30,40,50,60,70,80,92,100};
    n = sizeof(arr)/sizeof(int);
    cout<<sizeof(arr)/sizeof(int)<<endl;
     int tar = 90;
     bool flag = false;
          for(int i=0;i<=n-1;i++){
            if(arr[i] == tar){
             flag = true;
                break;
            }
           
          }
          if(flag == true)
          cout<<"found";

          else cout<<"not  found";

}