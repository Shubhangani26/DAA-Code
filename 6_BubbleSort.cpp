#include<iostream>
using namespace std;
void swap(int *x,int *y){
int temp=*x;
*x=*y;
*y=temp;
}
void bubbleSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
             swap(&arr[j],&arr[j+1]);
        }
    }
}
void print(int arr[],int size){
  int i;
  for (i=0;i<size;i++){
   cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={2,1,6,8,3,22,0};
  int size = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr,size);
  print(arr,size);
  return 0;
}