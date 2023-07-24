#include<iostream>
using namespace std;
void CountSort(int arr[],int size){
    int k = arr[0];
    for (int i=0;i<size;i++){
        k = max(k,arr[i]);
    }

    int count[10]={0};
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }

    for(int i =1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[size];
    for(int i = size-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    for(int i =0;i<size;i++){
       arr[i]=output[i];
       }
}
int main(){
    int arr[]={3,1,2,1,2,3,4,3,6,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    CountSort(arr,size);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}