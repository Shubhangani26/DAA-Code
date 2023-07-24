#include<iostream>
using namespace std;
int LinearSearch(int key,int i,int j,int arr[]){
    if(key==arr[i])
       return i;
    else 
      LinearSearch(key,i+1,j, arr);
}
int main(){
    int i=0;
    int arr[]={1,5,7,3,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = LinearSearch(9,i,n-1,arr);
    cout<<"The index is : "<<x;
    return 0;}