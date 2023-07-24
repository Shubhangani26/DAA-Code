#include<iostream>
using namespace std;
void combineSortedArray(int arr[],int low, int mid, int high){
   int n1 = mid-low+1;
   int n2= high-mid;
   int L[n1],M[n2];//temporary Array

   for(int i = 0;i<n1;i++){         
      L[i]=arr[low+i];
    }
   for(int j =0;j<n2;j++){
      M[j]=arr[j+(mid+1)];
   }
   int i =0;
   int j =0;
   int k =low;
   while(i<n1 && j<n2){
     if(L[i]<M[j]){
     arr[k]=L[i];
     k++;i++;
    }
    else{            
        arr[k]=M[j];
        k++;j++;
    }
 }
    while(i<n1){  
     arr[k]=L[i];
     k++;i++;
    }   
   while(j<n2){   
     arr[k]=M[j];
     k++;j++;
    }            
}   
void MergeSort(int arr[],int low,int high){
    if(low<high){
        
        int mid = (low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);

        combineSortedArray(arr,low,mid,high);
}
}
int main(){
    int arr[]={2,1,7,4,3,0,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,size-1);
    for(int i =0;i<size;i++){
    cout<<arr[i]<<",";
    }
    return 0;
}   