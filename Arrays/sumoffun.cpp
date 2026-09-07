#include<iostream>
using namespace std;
void sum( int* arr,int n){
    int sum=0,i;
  
    for(int i=0;i<n;i++)
    {
    sum+=arr[i];
    }
    cout<< sum;

}
 int main()
 {
        int n;
    
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    

   sum(arr,n);
 }