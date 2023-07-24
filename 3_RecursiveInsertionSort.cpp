#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    if(n<=1)
     return;
    insertionSort(arr,n-1);
    int last = arr[n-1];
    int j = n-2;
    while(j>=0&&arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last; 
}
void print(int arr[],int n){
    int i;
    for(i=0;i<n;i++)
     cout<<arr[i]<<" ";
}
int main(){
    int arr[]={8,9,0,5,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    print(arr,n);
}