#include<iostream>
using namespace std;
void swap(int *xp,int*yp){
   int temp =*xp;
   *xp=*yp;
   *yp = temp;
}
void selectionSort(int arr[],int size){
   int min_Index,i,j;
   for (i =0;i<size-1;i++){
    min_Index=i;
    for(j=i+1;j<size;j++){
        if(arr[j]<arr[min_Index])
           min_Index=j;
    }
   if(arr[min_Index!=i])
     swap(&arr[min_Index],&arr[i]);
   }
}
void print(int arr[],int size){
  int i;
  for (i=0;i<size;i++){
   cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]={2,1,6,8,3,22,20,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr,size);
  print(arr,size);
  return 0;
}
