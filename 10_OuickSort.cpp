#include<iostream>
using namespace std;
int partition(int arr[],int low , int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j = low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        
        }
    }
    int temp = arr[high];
    arr[high] = arr[i+1];
    arr[i+1] =temp;
    return (i+1);
}
void QuickSort(int arr[], int low, int high){
    if(low<high){
        int pivot_Index = partition(arr,low,high);

        QuickSort(arr,low,pivot_Index-1);
        QuickSort(arr,pivot_Index+1,high);
    }

}
int main(){
    int arr[] = {1,6,3,5,0,9,8,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,size-1);
    cout<<"The sorted array is : ";
    for (int i = 0;i<size-1;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;}