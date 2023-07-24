#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    int key ,j,i;
    for (i =0;i<size;i++){
      key =i;
      j = i-1;
    while(j>=0 && arr[j]>arr[key] ){ // for decreasing order arr[j]<arr[key]
      arr[j+1]= arr[j];
      j--;
    }
    arr[j+1] = key;
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
  insertionSort(arr,size);
  print(arr,size);
  return 0;
}