#include<iostream>
using namespace std;
void printarr(int arr[]){
    int i;
     int size = sizeof(arr[i]/sizeof(int));
     cout<<size;

   
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

}
int main()
{
    int i;
    int arr[5]={ 1,2,3,4,5};
    printarr(arr);
     int size = sizeof(arr[i]/sizeof(int));
     cout<<size;

}