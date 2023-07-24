#include<iostream>
using namespace std;
void swap(int *xp,int*yp){
   int temp =*xp;
   *xp=*yp;
   *yp = temp;
}
void selectionSort(int arr[],int n,int i =0){
     int min_Index = 0;
     if(i==n)
      return;
    for(int j=i+1;j<n-1;j++){
       if (arr[j]<arr[i])
          min_Index=j;
    }
    if(arr[min_Index]!=arr[i])
      swap(&arr[min_Index],&arr[i]);
    selectionSort( arr,n,i++);
}
void print(int arr[],int n){
    int i = 0;
    for(i = 0;i<n;i++)
     cout<<arr[i]<<" ";
}
int main(){
    int arr[]={8,0,9,3,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    print(arr,n);
    return 0;
}