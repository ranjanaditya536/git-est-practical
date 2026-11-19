#include<iostream>
using namespace std;
int partition(int arr[],int low , int high){

int pivot = arr[low];
int i=low;

for(int j=low+1;j<=high;j++)
{
    if(arr[j]<=pivot){
    i++;
swap(arr[i],arr[j]);

    }
}
swap(arr[low],arr[i]);
return i;
}  

void quicksort(int arr[],int low,int high) {
if(low<=high){
    int par=partition(arr,low,high );
    quicksort(arr,low,par-1);
    quicksort(arr,par+1,high);

}   }
int main(){
int arr[]={7,9,3,2,8,6};
int n=6;
 quicksort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";


}
return 0;
}