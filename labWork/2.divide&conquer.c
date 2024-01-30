#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
 
void findMaxMin(int arr[],int low,int high,int max,int min)
 {
     int mid = (low +high)/2;

     if (high-low==1){

         if(arr[low]<arr[high]){
             if(min>arr[low]){
                 min = arr[low];
             }
             if(max<arr[high]){
                 max = arr[high];

             }
         }

         if(arr[low]<arr[high]){
             if(arr[low]>max){
                 max = arr[high];
             }
             if(arr[high]<min){
                 min = arr[high];
                 
             }
         }

     }

      if (high == low){
        if(max < arr[low]){
            max = arr[low];
     }
         if(arr[high] <min){
           min = arr[high];
     }
 }
 


 findMaxMin(arr,low,mid,max,min);
  findMaxMin(arr,low,high,max,min);

 }
  int main(){
     int arr[] = {5,6,4,3,6,7,8,9};
     int size = sizeOf(arr)/sizeOf(arr[0]);

     int max = INT_MAX;
     int min = INT_MIN;
     findMaxMin(arr,0,size-1,max,min);
     printf("max is :%d", max);
     printf("min is :%d", min);
     return 0;

  }