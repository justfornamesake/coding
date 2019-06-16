// #include <bits/stdc++.h>
// using namespace std;
// int partition (int arr[],int low,int high){
//     int pivot=arr[high];
//     int i=low-1;
//      for(int j=low;j<=high-1;j++){
//         if(arr[j]<=pivot){
//              i++;
//              swap(arr[i],arr[j]);
//         }

//     }
//     swap(arr[i+1],arr[high]);
//     return i+1;
// }
// void quicksort(int arr[],int low,int high){
//       if(low<high){
//           int pi=partition(arr,low,high);
//           quicksort(arr,low,pi-1);
//           quicksort(arr,pi+1,high);
//       }
// }
// void printArray(int arr[], int size) 
// { 
//     int i; 
//     for (i=0; i < size; i++) 
//         printf("%d ", arr[i]); 
//     printf("n"); 
// } 
// int main(){
//     int arr[6]={90,100,1,8,78,67};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     quicksort(arr,0,n-1);
//     printArray(arr, n);

// }










#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
     int pivot=arr[high];
     int i=low-1;
     for(int j=low;j<=high;j++){
         if (arr[j]<pivot){
             i++;
             swap(arr[i],arr[pivot]);
         }
     }
     swap(arr[i+1],arr[high]);
     return i+1;
}
void quicksort(int arr[],int low, int high){
     if(low<=high){
         int pi=partition(arr,low,high);
         quicksort(arr,low,pi-1);
         quicksort(arr,pi+1,high);
     }
}
int main(){
    int arr[6]={99,8,888,77,8888,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
}















