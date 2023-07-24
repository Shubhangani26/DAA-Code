#include<iostream>
using namespace std;
int BinarySearch(int n,int i,int j, int a[]){
    int mid = (i+j)/2;
    if(n==a[mid]){
        return mid;
    }
    else {
        if (n>a[mid])
         return BinarySearch(n,mid+1,j,a);
        else
         return BinarySearch(n,i,mid-1,a);
    }
}
int main(){
    int x[]={0,3,5,9,10};
    int size = sizeof(x)/sizeof(x[0]);
    int i = 0;
    int j = size-1;
    int index = BinarySearch(9,i,j,x);
    cout<<"the index is "<<index;
    return 0;
}